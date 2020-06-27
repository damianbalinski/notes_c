#include <stdio.h>

#define STR(X) #X
#define CHR(X) #@X
#define CON(X, Y) X ## Y
#define CON2(X, Y) X##Y

int val1 = 10;
int val2 = 20;
int val3 = 30;

int main()
{
	printf(STR("jeden") "\n");
	printf(STR(jeden) "\n");

	printf(STR("dwa\"") "\n");
	printf(STR("\"" dwa) "\n");

	int Ma = 20;
	printf("%c\n", CHR(X));
	printf("%c\n", CHR(Ma));

	printf("%d\n", CON(val, 1));
	printf("%d\n", CON(val, 2));
	printf("%d\n", CON(val, 3));

	printf("%d\n", CON2(val, 1));
	printf("%d\n", CON2(val, 2));
	printf("%d\n", CON2(val, 3));
}