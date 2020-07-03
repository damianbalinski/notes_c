#include <stdio.h>
#include <fenv.h>

int main(void)
{
	printf("round: %d\n", fegetround());

	fesetround(FE_TONEAREST);
	printf("round: %d\n", fegetround());

	fesetround(FE_UPWARD);
	printf("round: %d\n", fegetround());

	fesetround(FE_DOWNWARD);
	printf("round: %d\n", fegetround());

	fesetround(FE_TOWARDZERO);
	printf("round: %d\n", fegetround());

	return 0;
}