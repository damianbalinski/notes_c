#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%d\n", __LINE__);
	printf("%s\n", __FILE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __STDC_HOSTED__);
	printf("%d\n", __STDC_SECURE_LIB__);
	printf("%d\n", __STDC_WANT_SECURE_LIB__);
	// printf("%d\n", __STDC__);			// GCC
	//printf("%d\n", __STDC_VERSION__);		// GCC
	putchar('\n');

	printf("%s\n", __FUNCDNAME__);
	printf("%s\n", __FUNCTION__);
	printf("%s\n", __FUNCSIG__);
	//printf("%s\n", __PRETTY_FUNCTION__);	// GCC
	printf("%s\n", __func__);

	return 0;
}