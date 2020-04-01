#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	FILE* out_file = fopen("name_of_file", "w+");
	printf("Hello world!\n");
	printf_s("Hello world!\n");
	
	fprintf(out_file, "Hello world");
	fprintf_s(out_file, "Hello world 2");
}