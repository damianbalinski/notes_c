#include <stdio.h>

struct S
{
	void(*test1)(void);
	void(*test2)(void);
};

void test1_src(void) { printf("test1\n"); };
void test2_src(void) { printf("test2\n"); };

int main(void)
{
	struct S s;

	s.test1 = test1_src;
	s.test2 = test2_src;

	s.test1();
	s.test2();

	return 0;
}