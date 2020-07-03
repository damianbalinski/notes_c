#include <stdio.h>
#include <fenv.h>

int main(void)
{
	printf("%d\n", FE_INEXACT);
	printf("%d\n", FE_UNDERFLOW);
	printf("%d\n", FE_OVERFLOW);
	printf("%d\n", FE_DIVBYZERO);
	printf("%d\n", FE_INVALID);
	printf("%d\n", FE_ALL_EXCEPT);
	printf("%d\n", FE_DFL_ENV);

	return 0;
}