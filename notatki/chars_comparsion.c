#include <stdio.h>

void main()
{
	char a = 'z';
	char b = 'a';
	
	if (a > b)
		printf("%c > %c\n", a, b);
	else if (a < b)
		printf("%c < %c\n", a, b);
	else
		printf("%c = %c\n", a, b);
}