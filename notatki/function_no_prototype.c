#include <stdio.h>

int foo();

void main()
{
	foo();
	foo(1);
	foo(1, 2);
}

int foo(int a, int b)
{
	printf("(%d,%d)\n", a, b);
}