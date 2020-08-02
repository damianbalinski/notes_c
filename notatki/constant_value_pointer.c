#include <stdio.h>

int main(void)
{
	int v1 = 10;
	const int v2 = 10;

	int* p1;
	const int* p2;

	int** pp1;
	const int** pp2;

	p1 = &v1;
	p1 = &v2;
	p2 = &v1;
	p2 = &v2;

	pp1 = &p1;
	pp1 = &p2;
	pp2 = &p1;
	pp2 = &p2;

	return 0;
}