#include <stdio.h>

void main()
{
	putc('a', stdout);
	fputc('a', stdout);

	getc(stdin);
	fgetc(stdin);
}