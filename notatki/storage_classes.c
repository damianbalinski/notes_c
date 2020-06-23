#pragma warning(disable : 4700)
#include <stdio.h>

// AUTOMATYCZNA
// auto a = 10;					// ERROR - zmienna automatyczna nie moze miec zasiegu plikowego
// auto void faa2();			// ERROR - funkcja nie moze byc automatyczna
// void faa(auto int aa);		// GCC ERROR

// REGISTER
//register int c = 10;			// ERROR - zmienna automatyczna nie moze miec zasiegu plikowego
//register int fbb2();			// ERROR - funkcja nie moze byc klasy register
void fbb(register int bb);

// STATYCZNA O LACZNOSCI WEWNETRZNEJ
static int d;
extern int d;
// void fdd(static int dd);		// GCC ERROR
static void fdd2(int dd);

// STATYCZNA O LACZNOSCI ZEWNETRZNEJ
int e;
extern int e;
// void fee(extern int ee);		// GCC ERROR
extern void fee2(int ee);

// WATKOWA
_Thread_local int f;
// _Thread_local int foo();		// GCC ERROR

void main()
{
	// AUTOMATYCZNA
	auto int a;
	auto int a_tab[100];
	int* ptr = &a;

	// REJESTROWA
	register int b;
	register int b_tab[100];
	// int* ptr = &b;

	// STATYCZNA BLOKOWA
	static int c;

	// STATYCZNA O LACZNOSCI WEWNETRZNEJ - odwolanie
	extern int d;

	// STATYCZNA O LACZNOSCI ZEWNETRZNEJ
	extern int e;
	
	// WATKOWY
	_Thread_local static int f;
	_Thread_local extern int f2;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);
	printf("d: %d\n", d);
	printf("e: %d\n", e);
}