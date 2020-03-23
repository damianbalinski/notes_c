#include <stdio.h>
#include <stdbool.h>

void main()
{
	int a = 15;
	int* ptr = &a;
	bool tak = true;
	bool nie = false;
	
	printf("NULL     : %d\n", NULL);
	printf("NULL ptr : %p\n", NULL);
	printf("VALUE ptr: %p\n", ptr);
	printf("VALUE x  : %x\n", ptr);
	printf("true     : %d\n", true);
	printf("false    : %d\n", false);
	
	printf("tak      : %d\n", tak);
	printf("nie      : %d\n", nie);
	printf("tak ptr  : %p\n", &tak);
	printf("nie ptr  : %p\n", &nie);
	
}