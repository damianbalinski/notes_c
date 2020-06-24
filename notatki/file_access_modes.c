#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STR "YYYYYYYYYYYYYYY"
#define STR2 "xxx"
#define FILENAME "test.txt"
#define FILENAME2 "test3.txt"
#define MAX 99

void main()
{
	FILE* file;
	char buff[100];

	// R
	//file = fopen(FILENAME, "r");
	//fgets(buff, MAX, file);
	//puts(buff);

	// R +
	//file = fopen(FILENAME2, "r+");
	//printf("%p\n", file);

	//fgets(buff, MAX, file);
	//puts(buff);
	//fputs(STR, file);
	
	// W
	//file = fopen(FILENAME, "w");
	//fputs(STR, file);

	// W+
	//file = fopen(FILENAME, "w");
	//fputs(STR, file);
	//puts(buff);

	// WX
	//file = fopen(FILENAME, "wx");
	//printf("%p\n", file);

	// WX+
	file = fopen("asdasd.txt", "w+x");
	printf("%p\n", file);

	// A
	//file = fopen(FILENAME, "a");
	//fputs(STR, file);

	// A+
	//file = fopen(FILENAME2, "a+");
	//fputs(STR, file);
	//fgets(buff, MAX, file);
	//puts(buff);

	if (file != NULL)
		fclose(file);
}