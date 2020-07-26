#include <stdio.h>

int foo() { return 1; }

void main()
{
	int n = 10;

	switch (n) 
	{
		case 1: printf("1");
			break;
		case 2: printf("2");
			break;
		case 3: printf("3");
			break;
		default: printf("def");
	}

	// C++ ONLY
	//switch (int k = foo(); k)
	//{
	//case 1: printf("1");
	//	break;
	//case 2: printf("2");
	//	break;
	//case 3: printf("3");
	//	break;
	//default: printf("def");
	//}
}