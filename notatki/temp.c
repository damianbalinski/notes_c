#include <stdio.h>

int myprint(char* str, ...);

int myprint(char* str, int a, int b)
{
	printf("(%d,%d)\n", a, b);
	return 0;
}

void main()
{
	myprint("qwe", 1);
	myprint("qwe", 1, 2);
	myprint("qwe", 1, 2, 3);
}