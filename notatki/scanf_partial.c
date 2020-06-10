#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a = 10, b = 10;

	// type 1234
	scanf("%2d%2d", &a, &b);

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}