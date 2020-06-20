#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str1[10];
	char str2[10];
	char str3[10];

	itoa(10, str1, 10);
	ltoa(10L, str2, 10);
	ultoa(10UL, str3, 10);

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);

	return 0;
}