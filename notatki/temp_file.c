#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 1024

int main(void)
{
	char buff1[MAX];
	char buff2[MAX];
	
	for (int i = 0; i < 100; i++)
	{
		strcpy(buff1, tmpnam(buff2));
		printf("[%s]\n", buff1);
		printf("[%s]\n", buff2);
	}


	return 0;
}