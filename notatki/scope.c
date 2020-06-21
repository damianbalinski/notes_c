#include <stdio.h>

void main()
{
	// TEST 1
	int x = 10, y = 20;
	printf("0: %d, %d\n", x, y);
	{
		int x = 20;
		y++;
		printf("1: %d, %d\n", x, y);
		{
			int x = 30;
			y++;
			printf("2: %d, %d\n", x, y);
		}

		printf("1: %d, %d\n", x, y);
	}

	printf("0: %d, %d\n", x, y);

	// TEST 2
	{
		int a = 10;
		printf("%p\n", &a);
	}
	{
		int b = 10;
		printf("%p\n", &b);
	}
	{
		int c = 10;
		printf("%p\n", &c);
	}
}