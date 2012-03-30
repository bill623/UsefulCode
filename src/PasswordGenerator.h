#ifndef _PASSWORD_GENERATOR_H_
#define _PASSWORD_GENERATOR_H_

#include <stdlib.h>

char table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "0123456789";

int RangedRandDemo( int range_min, int range_max)
{
    int u = static_cast<int>( rand() / (RAND_MAX + 1.0) * (range_max - range_min)
		+ range_min );
	return u;
}

void algorithm(char* sec, int secNum)
{
	for(int i = 0; i < secNum; ++i)
	{
		sec[i] = table[RangedRandDemo(0, sizeof(table) - 1)];
	}
}

#endif