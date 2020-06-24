#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 10

void main()
{
	FILE* file = fopen("test2.txt", "r");

	// SEEK_SET
	//for (long i = 0L; i < N; i++)
	//{
	//	fseek(file, i, SEEK_SET);
	//	printf("%d:", ftell(file));
	//	printf("%c\n", fgetc(file));
	//}

	// SEEK_CUR
	//for (long i = 0L; i < N; i++)
	//{
	//	fseek(file, 0L, SEEK_CUR);
	//	printf("%d:", ftell(file));
	//	printf("%c\n", fgetc(file));
	//}

	// SEEK_END
	for (long i = 1L; i <= N; i++)
	{
		fseek(file, -i, SEEK_END);
		printf("%d:", ftell(file));
		printf("%c\n", fgetc(file));
	}
		
	fclose(file);
}