#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	char str1[MAX];
	char str2[MAX];
	char str3[MAX];

	strcpy(str1, "jeden_");
	strcpy(str2, "dwa_");
	strcpy(str3, "trzy_");

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	putchar('\n');

	//strcat(str1, strcat(str2, str3));
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	//printf("%s\n", str3);
	//putchar('\n');

	strcat(strcat(str1, str2), str3);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	putchar('\n');

	return 0;
}