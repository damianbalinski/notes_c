#include <stdio.h>


typedef enum
{
	INT,
	FLOAT,
	CHAR,
} type;

type TYPE;

void function(void * pointer, int n)
{
	void* ptr = pointer;
	switch(TYPE)
	{
	case INT:
		printf("INT\n");
		for (int i = 0; i < n; i++)
			//printf("%d ", *((int*)ptr+i));
			printf("%d ", *((int*)ptr )++);
		printf("\n");
		break;
	case FLOAT:
		printf("FLOAT\n");
		for (int i = 0; i < n; i++)
			//printf("%f ", *((float*)ptr)++);
			printf("%f ", *(((float*)ptr)+i));
		printf("\n");
		break;
	case CHAR:
		printf("CHAR\n");
		for (int i = 0; i < n; i++)
			//printf("%c ", *((char*)ptr + i));
			printf("%c ", *((char*)ptr)++);
		printf("\n");
		break;
	}
}

void main()
{
	TYPE = INT;
	int t[] = { 1,2,3,4,5,6 };
	function(&t, 6);

	TYPE = FLOAT;
	float l[] = { 99.11, 9.22, 8.33, 7.44, 6.55, 5.66 };
	function(&l, 6);

	TYPE = CHAR;
	char g[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
	function(&g, 6);
}