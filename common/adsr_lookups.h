#ifndef ADSR_TABLES_H
#define	ADSR_TABLES_H

#include "synth.h"

const uint16_t attackCurveLookup[]=
{
	0,494,986,1475,1961,2444,2924,3402,3877,4349,4818,5284,5748,6209,6667,7123,
	7576,8026,8474,8919,9361,9801,10238,10673,11105,11534,11961,12386,12808,
	13227,13645,14059,14471,14881,15289,15694,16096,16497,16894,17290,17683,
	18074,18463,18849,19234,19615,19995,20372,20748,21121,21492,21860,22227,
	22591,22953,23313,23671,24027,24381,24732,25082,25430,25775,26119,26460,
	26800,27137,27473,27806,28138,28468,28795,29121,29445,29767,30087,30405,
	30722,31036,31349,31660,31969,32276,32581,32885,33187,33487,33785,34081,
	34376,34669,34961,35250,35538,35825,36109,36392,36673,36953,37231,37507,
	37782,38055,38326,38596,38865,39131,39397,39660,39922,40183,40442,40699,
	40955,41210,41463,41714,41964,42213,42460,42706,42950,43193,43434,43674,
	43912,44150,44385,44620,44853,45084,45315,45543,45771,45997,46222,46446,
	46668,46889,47109,47327,47544,47760,47975,48188,48400,48611,48820,49029,
	49236,49442,49646,49850,50052,50253,50453,50652,50850,51046,51241,51436,
	51629,51821,52011,52201,52389,52577,52763,52948,53133,53316,53498,53679,
	53858,54037,54215,54392,54567,54742,54916,55088,55260,55430,55600,55769,
	55936,56103,56268,56433,56597,56759,56921,57082,57242,57401,57559,57716,
	57872,58028,58182,58335,58488,58640,58790,58940,59089,59237,59385,59531,
	59676,59821,59965,60108,60250,60391,60532,60672,60810,60948,61086,61222,
	61358,61493,61627,61760,61892,62024,62155,62285,62414,62543,62671,62798,
	62924,63050,63175,63299,63422,63545,63667,63788,63909,64029,64148,64266,
	64384,64501,64618,64733,64848,64963,65076,65189,65302,65413,65524,
};

const uint16_t decayCurveLookup[]=
{
	0,1890,3684,5428,7122,8769,10369,11924,13435,14904,16331,17719,19067,
	20377,21650,22887,24090,25259,26394,27498,28571,29613,30626,31611,32568,
	33497,34401,35279,36133,36962,37768,38552,39313,40053,40772,41471,42150,
	42810,43451,44074,44680,45269,45841,46397,46937,47462,47972,48468,48950,
	49419,49874,50316,50746,51164,51570,51965,52348,52721,53083,53435,53777,
	54110,54433,54747,55052,55348,55636,55917,56189,56453,56710,56960,57203,
	57439,57668,57891,58108,58318,58523,58721,58914,59102,59285,59462,59634,
	59802,59965,60123,60276,60426,60571,60712,60849,60982,61112,61238,61360,
	61479,61594,61707,61816,61922,62025,62125,62222,62317,62409,62498,62585,
	62669,62751,62831,62908,62983,63057,63128,63197,63264,63329,63392,63454,
	63514,63572,63629,63684,63737,63789,63839,63888,63936,63982,64027,64071,
	64113,64155,64195,64234,64272,64309,64344,64379,64413,64446,64478,64509,
	64539,64568,64597,64624,64651,64677,64703,64728,64752,64775,64798,64820,
	64841,64862,64882,64902,64921,64939,64957,64975,64992,65008,65025,65040,
	65055,65070,65084,65098,65112,65125,65138,65150,65162,65174,65186,65197,
	65207,65218,65228,65238,65248,65257,65266,65275,65284,65292,65300,65308,
	65315,65323,65330,65337,65344,65351,65357,65363,65369,65375,65381,65387,
	65392,65397,65403,65408,65412,65417,65422,65426,65430,65435,65439,65443,
	65447,65450,65454,65457,65461,65464,65467,65471,65474,65477,65480,65482,
	65485,65488,65490,65493,65495,65498,65500,65502,65504,65507,65509,65511,
	65513,65514,65516,65518,65520,65521,65523,65525,65526,65528,65529,65531,
	65532,65533,65535,
};
		
const PROGMEM uint8_t phaseLookupHi[]=
{                                                                                         
	0xff, 0xc, 0xb, 0xb, 0xb, 0xa, 0xa, 0x9, 0x9, 0x9, 0x8, 0x8, 0x8, 0x8, 0x7, 0x7,
	0x7, 0x6, 0x6, 0x6, 0x6, 0x6, 0x5, 0x5, 0x5, 0x5, 0x5, 0x4, 0x4, 0x4, 0x4, 0x4,
	0x4, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2,
	0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1,
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
};

const PROGMEM uint8_t phaseLookupMid[]=
{                                                                                        
	0xff, 0x59, 0xe9, 0x7d, 0x15, 0xb1, 0x50, 0xf3, 0x99, 0x42, 0xee, 0x9d, 0x4f, 0x4, 0xbc, 0x76,
	0x32, 0xf1, 0xb2, 0x76, 0x3b, 0x3, 0xcc, 0x98, 0x65, 0x34, 0x5, 0xd8, 0xac, 0x82, 0x59, 0x32,
	0xc, 0xe7, 0xc4, 0xa2, 0x81, 0x61, 0x43, 0x25, 0x9, 0xed, 0xd3, 0xb9, 0xa0, 0x89, 0x72, 0x5c,
	0x46, 0x32, 0x1e, 0xb, 0xf8, 0xe6, 0xd5, 0xc4, 0xb4, 0xa5, 0x96, 0x88, 0x7a, 0x6d, 0x60, 0x53,
	0x47, 0x3c, 0x30, 0x26, 0x1b, 0x11, 0x8, 0xfe, 0xf5, 0xed, 0xe4, 0xdc, 0xd4, 0xcd, 0xc6, 0xbf,
	0xb8, 0xb1, 0xab, 0xa5, 0x9f, 0x99, 0x94, 0x8f, 0x8a, 0x85, 0x80, 0x7c, 0x77, 0x73, 0x6f, 0x6b,
	0x67, 0x63, 0x60, 0x5d, 0x59, 0x56, 0x53, 0x50, 0x4d, 0x4a, 0x48, 0x45, 0x43, 0x40, 0x3e, 0x3c,
	0x3a, 0x38, 0x36, 0x34, 0x32, 0x30, 0x2e, 0x2d, 0x2b, 0x2a, 0x28, 0x27, 0x25, 0x24, 0x23, 0x21,
	0x20, 0x1f, 0x1e, 0x1d, 0x1c, 0x1b, 0x1a, 0x19, 0x18, 0x17, 0x16, 0x16, 0x15, 0x14, 0x13, 0x13,
	0x12, 0x11, 0x11, 0x10, 0xf, 0xf, 0xe, 0xe, 0xd, 0xd, 0xc, 0xc, 0xb, 0xb, 0xb, 0xa,
	0xa, 0x9, 0x9, 0x9, 0x8, 0x8, 0x8, 0x8, 0x7, 0x7, 0x7, 0x6, 0x6, 0x6, 0x6, 0x6,
	0x5, 0x5, 0x5, 0x5, 0x5, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x3, 0x3, 0x3, 0x3, 0x3,
	0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1,
	0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1,
	0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
};

const PROGMEM uint8_t phaseLookupLo[]=
{                                                                                         
	0xff, 0x0, 0x4c, 0x8a, 0x97, 0x50, 0x95, 0x45, 0x40, 0x6b, 0xa6, 0xd8, 0xe4, 0xb2, 0x28, 0x2e,
	0xae, 0x90, 0xbf, 0x26, 0xb1, 0x4e, 0xe8, 0x6f, 0xd0, 0xfb, 0xe0, 0x70, 0x9a, 0x51, 0x86, 0x2c,
	0x37, 0x98, 0x45, 0x32, 0x53, 0x9d, 0x6, 0x84, 0xd, 0x97, 0x1a, 0x8c, 0xe6, 0x1e, 0x2e, 0xd,
	0xb4, 0x1d, 0x40, 0x16, 0x9a, 0xc5, 0x91, 0xf9, 0xf7, 0x86, 0xa1, 0x42, 0x66, 0x6, 0x20, 0xaf,
	0xae, 0x19, 0xee, 0x27, 0xc2, 0xbb, 0xe, 0xba, 0xb9, 0xa, 0xaa, 0x95, 0xca, 0x45, 0x4, 0x4,
	0x44, 0xc1, 0x79, 0x6a, 0x91, 0xee, 0x7d, 0x3e, 0x2e, 0x4c, 0x96, 0xb, 0xa9, 0x6e, 0x5a, 0x6a,
	0x9f, 0xf5, 0x6d, 0x5, 0xbb, 0x8f, 0x80, 0x8d, 0xb4, 0xf5, 0x4f, 0xc1, 0x4a, 0xe9, 0x9e, 0x67,
	0x45, 0x36, 0x39, 0x4f, 0x75, 0xad, 0xf4, 0x4c, 0xb2, 0x27, 0xa9, 0x39, 0xd7, 0x80, 0x36, 0xf7,
	0xc4, 0x9c, 0x7e, 0x6a, 0x60, 0x5f, 0x67, 0x79, 0x92, 0xb4, 0xdd, 0xe, 0x47, 0x86, 0xcd, 0x1a,
	0x6d, 0xc6, 0x25, 0x8a, 0xf4, 0x64, 0xd9, 0x53, 0xd1, 0x54, 0xdb, 0x67, 0xf7, 0x8b, 0x22, 0xbd,
	0x5c, 0xfe, 0xa4, 0x4d, 0xf9, 0xa7, 0x59, 0xe, 0xc5, 0x7e, 0x3b, 0xf9, 0xba, 0x7d, 0x43, 0xa,
	0xd3, 0x9f, 0x6c, 0x3b, 0xb, 0xde, 0xb2, 0x87, 0x5e, 0x37, 0x10, 0xec, 0xc8, 0xa6, 0x85, 0x65,
	0x46, 0x29, 0xc, 0xf1, 0xd6, 0xbc, 0xa3, 0x8c, 0x75, 0x5e, 0x49, 0x34, 0x20, 0xd, 0xfa, 0xe9,
	0xd7, 0xc7, 0xb6, 0xa7, 0x98, 0x8a, 0x7c, 0x6e, 0x61, 0x55, 0x49, 0x3d, 0x32, 0x27, 0x1d, 0x12,
	0x9, 0xff, 0xf6, 0xee, 0xe5, 0xdd, 0xd5, 0xce, 0xc6, 0xbf, 0xb9, 0xb2, 0xac, 0xa6, 0xa0, 0x9a,
	0x95, 0x8f, 0x8a, 0x85, 0x81, 0x7c, 0x78, 0x73, 0x6f, 0x6b, 0x68, 0x64, 0x60, 0x5d, 0x5a, 0x56,	
};
			
#endif	/* ADSR_TABLES_H */

