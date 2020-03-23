#include <stdio.h>

void funkcja(void)
{
	printf("Hello world\n");
}

void main()
{
	//rzutowanie zwracanej wartosci jawnie odrzuca zwracana wartosc
	(void)funkcja();
}