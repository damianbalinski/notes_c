#include <stdio.h>
#include <stdlib.h>

_Noreturn void test()
{
	exit(0);
}

int main()
{
	test();
	return 0;
}