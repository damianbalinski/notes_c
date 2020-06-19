//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BUFF "123"

void main()
{ 
	int num;
	int buff[10];

	// SCANF
	//scanf("%d", &num);
	//printf("%d\n", num);

	// FSCANF
	//fscanf(stdin, "%d", &num);
	//printf("%d\n", num);

	// SSCANF
	//sscanf(BUFF, "%d", &num);
	//printf("%d\n", num);

	// SCANF_S
	//scanf_s("%d", &num);
	//printf_s("%d\n", num);
	//scanf_s("%s", buff, 10);
	//printf("%s\n", buff);

	// FSCANF_S
	//fscanf_s(stdin, "%d", &num);
	//printf_s("%d\n", num);
	//fscanf_s(stdin, "%s", buff, 9);
	//printf("%s\n", buff);

	// SSCANF_S
	sscanf_s(BUFF, "%d", &num);
	printf("%d\n", num);
	sscanf_s(BUFF, "%s", buff, 9);
	printf("%s\n", buff);
}