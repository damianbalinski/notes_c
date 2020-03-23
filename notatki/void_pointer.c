#include <stdio.h>

#define INT(X) *(int*)X
#define FLOAT(X) *(float*)X
#define CHAR(X) *(char*)X

typedef enum
{
	INT,
	FLOAT,
	CHAR,
} type;

type TYPE;

void function(void* p)
{
	switch (TYPE)
	{
	case INT:
		printf("inside INT: %d\n", INT(p));
		break;
	case FLOAT:
		printf("inside FLOAT %f\n", FLOAT(p));
		break;
	case CHAR:
		printf("inside CHAR %c\n", CHAR(p));
		break;
	}
}
void main()
{
	void* ptr;
	int a = 10;
	float b = 10.99;
	char c = 'A';

	TYPE = INT;
	ptr = &a;
	printf("INT: %d\n", a);
	printf("INT: %d\n", INT(ptr));
	function(ptr);

	TYPE = FLOAT;
	ptr = &b;
	printf("FLOAT: %f\n", b);
	printf("FLOAT: %f\n", FLOAT(ptr));
	function(ptr);

	TYPE = CHAR;
	ptr = &c;
	printf("CHAR: %c\n", c);
	printf("CHAR: %c\n", CHAR(ptr));
	function(ptr);

}