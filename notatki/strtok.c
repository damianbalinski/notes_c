#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void main()
{
	/*
	 * strtok - rozklada string na zetony, w lancuchu string
	 * znajduje najblizszy separator, zastepuje go znakiem pustym
	 * oraz zwraca wskaznik na tak powstaly zeton, zwraca null
	 * jesli nie udalo sie znalezc zetonu
	 */
	
	char string[] = "aaa bbb ccc;ddd;eee,fff";
	char delimiters[] = " ;,.";
	char* current;

	current = strtok(string, delimiters);
	while(current)
	{
		printf("%s\n", current);
		current = strtok(NULL, delimiters);
	}
}