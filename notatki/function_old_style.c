#include <stdio.h>

int foo(int a, int b);
int boo(int a, int b);

int foo(int a, int b)
{
	printf("(%d,%d)\n", a, b);
	return a + b;
}

int boo(a, b)
int a, b;
{
	printf("(%d,%d)\n", a, b);
	return a + b;
}

void main()
{
	foo(1, 2);
	boo(3, 4);
}