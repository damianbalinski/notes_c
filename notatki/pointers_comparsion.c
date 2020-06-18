#include <stdio.h>

void main()
{
	int a1, a2;
	float b1, b2;

	int* p1, * p2;
	float* q1, * q2;

	p1 = &a1, p2 = &a2;
	q1 = &b1, q2 = &b2;

	//printf("%p\n", p1);
	//printf("%p\n", p2);
	//printf("%p\n", q1);
	//printf("%p\n", q2);

	printf("%d\n", p1 < p2);
	printf("%d\n", p1 > p2);
	printf("%d\n", q1 < q2);
	printf("%d\n", q1 > q2);
	putchar('\n');

	printf("%d\n", p1 < q1);
	printf("%d\n", p1 < q2);
	printf("%d\n", p2 > q1);
	printf("%d\n", p2 > q2);
}