#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
//#define NAZWA wartosc  - definiowanie stalych jawnych
#define LICZBA 100
#define ZNAK 'abcd' /*komentarz*/
#define NAPIS "asdasdas" //komentarz
#define NAPIS2 NAPIS
#define ZETONY 1, 2, 3

#define DODAC + 5
#define KOLEJNY , "kolejny"

#pragma warning(disable : 4996)

void main()
{
	//stale jawne sa podstawiane w czasie kompiacji programu
	printf("MAX: %d\n", LICZBA);  
	printf("ZNAK: %c\n", ZNAK);  
	printf("NAPIS: %s\n", NAPIS);
	printf("NAPIS2: %s\n", NAPIS2);
	printf("dodawanie: %d\n", 5 DODAC);
	printf("dwa napisy: %s %s\n", "pierszy" KOLEJNY);

	printf("%d %d %d\n", ZETONY);

	//przedefiniowanie stalej
	#define ZETONY 1, 23, 233
	printf("%d %d %d\n", ZETONY);
}