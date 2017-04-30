#include "helloapi.h"

#include <stdio.h>

void HelloFunc(const char* msg)
{
	printf(msg);
	printf("\n");
}

int Add(int x, int y)
{
	return x+y;
}
