#include <stdio.h>
#include <limits.h>

void main()
{
	unsigned char a, b, c;

	a = 255;
	b = 200;
	c = (a + b) / 2;

	printf("%d\n", (int)a);
	printf("%d\n", (int)b);
	printf("%d\n", (int)c);
}