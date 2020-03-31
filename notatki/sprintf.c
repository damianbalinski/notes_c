#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	/*
	 * sprintf - wynikowy string zapisuje pod podanym adresem
	 */
	char dest[100];
	sprintf(dest, "znak: %c, napis: %s, numer: %d, liczba: %f\n", 'a', "abcdef", 10, 10.1);
	printf("%s", dest);
}