#include <stdio.h>
#include <stdlib.h>

void first(void) { puts("first"); }
void second(void) { puts("second"); }
void third(void) { puts("third"); }
void fourth(int x) { puts("fourth"); }
int fifth(void) { puts("fifth"); }
int sixth(int x) { puts("sixth"); }


int main()
{
	atexit(first);
	atexit(second);
	atexit(third);
	//atexit(fourth);		// WARNING
	//atexit(fifth);		// WARNING
	//atexit(sixth);		// WARNING
	return 0;
}