#include <stdio.h>
#include <limits.h>

#define KWADR(X) X*X
#define KWADR_OK(X) ((X)*(X))
#define PKW(X) printf("kwadrat X to %d\n", ((X)*(X)))
#define PKW_OK(X) printf(#X" to %d\n", ((X)*(X)))

// umieszczanie wszystkiego w nawiasach wymusza prawidlowa interpretacje wyrazen
// #y sluzy do zastepowania symboli, jedyny sposob
void main()
{
	int x = 3;
	int y = 5;
	printf("KWADR(1+2): %d\n", KWADR(1+2));
	printf("KWADR_OK(1+2): %d\n", KWADR_OK(1+2));
	printf("KWADR_OK(++x): %d\n", KWADR_OK(++x));
	printf("KWADR_OK(++y): %d\n", KWADR_OK(++y));
	printf("x: %d\n", x);
	printf("y: %d\n", y);

	int z = 123;
	PKW(12);
	PKW_OK(12);
	PKW(z);
	PKW_OK(z);
	
}