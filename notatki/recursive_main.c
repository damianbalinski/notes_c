#include <stdio.h>

int COUNTER = 0;

int main(int x)
{
	if (COUNTER < 10) {
		printf("x    : %d\n", x);
		printf("count: %d\n", COUNTER++);
		int res = main(COUNTER);
		printf("res  : %d\n", res);
	}

	return 0;
}