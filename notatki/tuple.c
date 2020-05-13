#include <stdio.h>

int number(int a) { printf("%d\n", a); }

void main()
{
	char s[] = "jeden";
	char t[] = "dwa";

	(s, t);
	s, t;

	printf("%p\n", s);
	printf("%p\n", t);

	printf("\n");
	printf("%p\n%p\n%p\n", ((s, t, s)));
	printf("%p\n%p\n%p\n", s);

	number(5);
	number(24);
	
	//int (*num)(int a) { printf("%d\n", a); }(20);

	//void(^ count_loop)() = ^ {
	//  for (int i = 0; i < 100; i++)
	//	printf("%d\n", i);
	//  printf("ah ah ah\n");
	//};
}