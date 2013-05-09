////////////////////////////////////////////////////////////////////////////////
// LFO (low freuency oscillator)
////////////////////////////////////////////////////////////////////////////////

#include "lfo.h"

static uint16_t sineShape[256];

static void updateIncrement(struct lfo_s * lfo)
{
	lfo->increment=((int32_t)lfo->speedCV<<lfo->speedShift)*(1-lfo->halfPeriod*2);
}

void inline lfo_setCVs(struct lfo_s * lfo, uint16_t spd, uint16_t lvl)
{
	lfo->levelCV=lvl;

	if(spd!=lfo->speedCV)
	{
		lfo->speedCV=spd;
		updateIncrement(lfo);
	}
}

void inline lfo_setShape(struct lfo_s * lfo, lfoShape_t shape)
{
	lfo->shape=shape;
	lfo->noise=random();
}

void lfo_setSpeedShift(struct lfo_s * lfo, uint8_t shift)
{
	lfo->speedShift=shift;

	updateIncrement(lfo);
}

int16_t inline lfo_getOutput(struct lfo_s * lfo)
{
	return lfo->output;
}

const char * lfo_shapeName(lfoShape_t shape)
{
	switch(shape)
	{
	case lsPulse:
		return "pulse";
	case lsTri:
		return "tri";
	case lsRand:
		return "rand";
	case lsSine:
		return "sine";
	case lsNoise:
		return "noise";
	case lsSaw:
		return "saw";
	}
	
	return "";
}

void lfo_init(struct lfo_s * lfo)
{
	int16_t i;
	
	memset(lfo,0,sizeof(struct lfo_s));
	
	for(i=0;i<256;++i)
		sineShape[i]=(cosf((i/255.0f+1.0f)*M_PI)+1.0f)/2.0f*65535.0f;
}

void lfo_update(struct lfo_s * l)
{
	// handle phase overflow
	
	if(l->phase>>24) // if bit 24 or higher is set, it's an overflow -> a half period is done!
	{
		l->halfPeriod=1-l->halfPeriod;
		l->phase=l->halfPeriod?0x00ffffff:0;
		
		updateIncrement(l);

		switch(l->shape)
		{
		case lsPulse:
			l->rawOutput=l->halfPeriod*UINT16_MAX;
			break;
		case lsRand:
			l->rawOutput=random();
			break;
		default:
			;
		}
	}
	
	// handle continuous shapes

	switch(l->shape)
	{
	case lsTri:
		l->rawOutput=l->phase>>8;
		break;
	case lsSine:
		l->rawOutput=computeShape(l->phase,sineShape);
		break;
	case lsNoise:
		l->noise=lfsr(l->noise,(l->speedCV>>12)+1);
		l->rawOutput=l->noise;
		break;
	case lsSaw:
		l->rawOutput=l->phase>>9;
		if(l->halfPeriod)
			l->rawOutput=UINT16_MAX-l->rawOutput;
		break;
	default:
		;
	}
	
	// phase increment
	
	l->phase+=l->increment;

	// compute output
	
	int32_t o;
	
	o=l->rawOutput;
	o+=INT16_MIN;
	o*=l->levelCV;
	o/=UINT16_MAX;
	
	l->output=o;
}


