#ifndef ADSR_TABLES_H
#define	ADSR_TABLES_H

#include "p600.h"

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
	0,1845,3639,5383,7077,8724,10324,11879,13390,14859,16286,17674,19022,20332,
	21605,22842,24045,25214,26349,27453,28526,29568,30581,31566,32523,33452,
	34356,35234,36088,36917,37723,38507,39268,40008,40727,41426,42105,42765,
	43406,44029,44635,45224,45796,46352,46892,47417,47927,48423,48905,49374,
	49829,50271,50701,51119,51525,51920,52303,52676,53038,53390,53732,54065,
	54388,54702,55007,55303,55591,55872,56144,56408,56665,56915,57158,57394,
	57623,57846,58063,58273,58478,58676,58869,59057,59240,59417,59589,59757,
	59920,60078,60231,60381,60526,60667,60804,60937,61067,61193,61315,61434,
	61549,61662,61771,61877,61980,62080,62177,62272,62364,62453,62540,62624,
	62706,62786,62863,62938,63012,63083,63152,63219,63284,63347,63409,63469,
	63527,63584,63639,63692,63744,63794,63843,63891,63937,63982,64026,64068,
	64110,64150,64189,64227,64264,64299,64334,64368,64401,64433,64464,64494,
	64523,64552,64579,64606,64632,64658,64683,64707,64730,64753,64775,64796,
	64817,64837,64857,64876,64894,64912,64930,64947,64963,64980,64995,65010,
	65025,65039,65053,65067,65080,65093,65105,65117,65129,65141,65152,65162,
	65173,65183,65193,65203,65212,65221,65230,65239,65247,65255,65263,65270,
	65278,65285,65292,65299,65306,65312,65318,65324,65330,65336,65342,65347,
	65352,65358,65363,65367,65372,65377,65381,65385,65390,65394,65398,65402,
	65405,65409,65412,65416,65419,65422,65426,65429,65432,65435,65437,65440,
	65443,65445,65448,65450,65453,65455,65457,65459,65462,65464,65466,65468,
	65469,65471,65473,65475,65476,65478,65480,65481,65483,65484,65486,65487,
	65488,65490,
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

