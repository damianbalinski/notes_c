#include <stdio.h>
#include <iso646.h>

void main()
{
	printf("%d", 0 and 0);
	printf("%d", 0 and 1);
	printf("%d", 1 and 0);
	printf("%d", 1 and 1);
	printf("\n");

	printf("%d", 0 or 0);
	printf("%d", 0 or 1);
	printf("%d", 1 or 0);
	printf("%d", 1 or 1);
	printf("\n");

	printf("%d", 0 xor 0);
	printf("%d", 0 xor 1);
	printf("%d", 1 xor 0);
	printf("%d", 1 xor 1);
	printf("\n"); 

}