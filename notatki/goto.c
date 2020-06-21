#include <stdio.h>

/*
 * Etykieta ma zasieg funkcji, mozliwe powielenie nazw
 * etykiet w dwoch roznych funkcjach, nie mozna skakac
 * do etykiety w innej funkcji
 */
int foo()
{
A:	printf("FOO\n");
B:
C:
D:
Z:
	return 0;
}

void main()
{
	foo();
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
