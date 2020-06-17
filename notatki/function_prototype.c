#include <stdio.h>

int foo(int a, int b);
int boo(a, b);
int goo(int, int a);

int foo(int a, int b)
{
	return a + b;
}

int boo(a, b)
{
	// domyslnie int
	return a + b;
}

int goo(int a, int b)
{
	return a + b;
}

doo(int a, int b)
{
	// domyslnie funkcja jest typu int
	return a + b;
}

void main()
{
	// deklaracja wewnatrz funkcji main
	int doo(int a, int b);

	foo(1, 2);
	boo(1, 2);
	goo(1, 2);
	doo(1, 2);
	foo(1.0, 2.0);
}