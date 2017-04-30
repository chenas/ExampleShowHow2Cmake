#include <stdio.h>
#include "helloapi.h"

int main(int argc, char* argv[])
{
	printf("hello\n");
	printf("%d\n", Add(12, 10));
	HelloFunc("this is from hello api");
	getchar();
	return 0;
}
