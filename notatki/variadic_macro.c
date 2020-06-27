#include <stdio.h>

#define PR(str, ...) printf(str, __VA_ARGS__)

int main()
{
	PR("hello %d", 12);
	return 0;
}