#include <stdio.h>

int main(void)
{
	printf("int : %zd\n", sizeof(int));
	printf("char: %zd\n", sizeof(char));

	int a = 'ABCD';
	printf("A: %x\n", (int)'A');
	printf("B: %x\n", (int)'B');
	printf("C: %x\n", (int)'C');
	printf("D: %x\n", (int)'D');
	putchar('\n');

	printf("%d\n", a);
	printf("%x\n", a);

	return 0;
}