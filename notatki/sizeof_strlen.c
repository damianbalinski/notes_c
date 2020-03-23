#include <stdio.h>
#include <string.h>
#define MAX 100
#pragma warning(disable : 4996)

void main()
{
	char* a = "a";
	char* b = 'b';

	char c[] = "a";
	char d = 'a';

	printf("sizeof a: %d\n", sizeof a);
	printf("sizeof b: %d\n", sizeof(b));

	printf("sizeof c: %d\n", sizeof c);
	printf("sizeof d: %d\n", sizeof(d));
	
	printf("strlen(c): %d\n", strlen(c));
	printf("strlen(d): %d\n", strlen(&d));
}