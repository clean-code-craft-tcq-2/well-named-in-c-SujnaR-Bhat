#include <stdio.h>
#include "print_colorcode.h"
#include "color_pairnum.h"

void ColorCodingManual()
{
	printf("Color Coding Manual");
	int pairnum;
  	int totalPairs = 25;
  	for (pairnum = 1; pairnum <= totalPairs; pairnum++)
	{
		ColorPair colorPair = GetColorFromPairNumber(pairnum);
		char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
		ColorPairToString(&colorPair, colorPairNames);
		printf("%s PairNo: %d\n", colorPairNames, pairnum);
	}
}
