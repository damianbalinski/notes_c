#include <stdio.h>
#include <assert.h>
#define NUM 10

//_Static_assert(NUM, "NUM ma wartosc 0");

static_assert(10==10, "NUM ma wartosc 0");

int main()
{
	return 0;
}