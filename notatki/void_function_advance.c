#include <stdio.h>

void func1(void);
void func2(void);
void func3(void);

void func1(void)
{
	printf("func1\n");
	return func2();
}

void func2(void)
{
	printf("func2\n");
	return func3();
}

void func3(void)
{
	printf("func3\n");
	return;
}

int main(void)
{
	func1();
	return 0;
}