#include <stdio.h>

void main()
{
	printf("%d\n", __LINE__);
	printf("%s\n", __FILE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __STDC_HOSTED__);
	printf("%d\n", __STDC_SECURE_LIB__);
	printf("%d\n", __STDC_WANT_SECURE_LIB__);
	printf("%s\n", __FUNCDNAME__);
	printf("%s\n", __func__);
}