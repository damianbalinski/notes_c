#pragma warning(disable : 4700)
#include <stdio.h>

// CONST
const int A = 10;
const int faa() { printf("a\n"); }

// VOLATILE
volatile int b = 10;
volatile int fbb() { printf("b\n"); }

// RESTRICT
int* restrict c = (int* restrict)10;

// ATOMIC
_Atomic int d = 10;
_Atomic int fdd() { printf("d\n"); }


void main()
{
	// CONST
	const int a;
	const int a2 = 10;
	printf("%d %d\n", a, a2);

	// VOLATILE
	volatile int b;
	volatile int b2 = 10;
	printf("%d %d\n", b, b2);

	// RESTRICT
	int * restrict c;
	int * restrict c2 = (int* restrict)10;
	printf("%p %p\n", c, c2);

	// ATOMIC
	_Atomic int d;
	_Atomic int d2 = 10;
	printf("%d\n", d);
}