#include <stdio.h>

void main()
{
	// zero truncating
	printf("%d\n", 11 % 2);
	printf("%d\n", 11 % -2);
	printf("%d\n", -11 % 2);
	printf("%d\n", -11 % -2);

	printf("%d\n", 11 % 2);
	printf("%d\n", 11 % (-2));
	printf("%d\n", (-11) % 2);
	printf("%d\n", (-11) % (-2));
}