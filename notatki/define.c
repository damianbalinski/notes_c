#include <stdio.h>

#define WAR(X,Y) FUN(X,Y)
#define FUN(X,Y) X ## Y

void funkcja_int()
{
	printf("jestem INT\n");
}

void funkcja_char()
{
	printf("jestem CHAR\n");
}

void fun_char(int a)
{
	printf("funkcja_wersja %d\n", a);
}

void main()
{
	char funkcja[] = "fun";
	char wersja[] = "char";
	funkcja_int();
	funkcja_char();
	FUN(funkcja, wersja)(5);

	//char oper = '<';
	//char space = ' ';
	//if (5 FUN(oper, space) 3);
	//	printf("5 %s 3\n" oper);

	
}