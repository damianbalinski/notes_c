#include <stdio.h>

void main()
{
A:
	printf("A");
	goto C;

B: 
	printf("B");
	goto D;

C:
	printf("C");
	goto B;

D:
	printf("D");
	goto A;

E:
	;
}
