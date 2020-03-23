#include <stdio.h>
#include <string.h>
#define MAX 100
#pragma warning(disable : 4996)

void main()
{
	int a;
	//scanf("%*d %*d %5d", &a);
	scanf("%5d", &a);
	printf("a: %d\n", a);
}