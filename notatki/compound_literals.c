#include <stdio.h>

typedef struct
{
	int val;
	char* str;

} mystruct;


typedef union
{
	int i;
	float f;

} myunion;

void main()
{
	// char
	char x1 = (char){ 'a' };
	char x2 = ++(char){ 'b' };

	// int
	int y1 = (int) { 1 };
	int y2 = ++(int) { 10 };

	// float
	float z1 = (float){ 1.1 };
	float z2 = ++(float){ 1.1 };

	// char array
	char* c1 = (const char[]){ "abc" };
	char* c2 = (char[]){ 'a', 'b', 'c', '\0' };

	// int array
	int* a1 = (int[]) {1, 2, 3, 4, 5};
	int* a2 = (int[]) {[0]=1, [4]=2, 3, 4, 5};

	// int 2d array
	int (*b1)[3] = (int[][3]) { {1, 2, 3}, { 4, 5, 6 }};

	// structure
	mystruct d1 = (mystruct) {12, "abc"};
	mystruct d2 = (mystruct) {.val=12, .str="abc"};

	// pointer to structure
	mystruct* e1 = &(mystruct) { 10, "xyz" };
	mystruct* e2 = &(mystruct) { .val = 99, .str = "qwe" };

	// union
	myunion f1 = (myunion){ 12 };
	myunion f2 = (myunion){ 12.1 };

	// pointer to union
	myunion* g1 = &(myunion){ 99 };
	myunion* g2 = &(myunion){ .f=99.9 };

	printf("%d\n", a1[3]);
	printf("%d\n", a2[3]);
	printf("%d\n", b1[1][2]);

	printf("%s\n", c1);
	printf("%s\n", c2);

	printf("%d\n", d1.val);
	printf("%s\n", d1.str);
	printf("%d\n", d2.val);
	printf("%s\n", d2.str);

	printf("%d\n", e1->val);
	printf("%s\n", e1->str);
	printf("%d\n", e2->val);
	printf("%s\n", e2->str);

	printf("%c\n", x1);
	printf("%c\n", x2);
	printf("%d\n", y1);
	printf("%d\n", y2);
	printf("%f\n", z1);
	printf("%f\n", z2);

	printf("%d\n", f1.i);
	printf("%f\n", f2.f);
	printf("%d\n", g1->i);
	printf("%f\n", g2->f);
}