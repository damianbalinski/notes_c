#include <stdio.h>

struct node
{
	int a;
	float k;
};

/*
 * sizeof is an unary operator.
 */
void main()
{
	int a;
	int b = 10;

	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(a));
	printf("%zd\n", sizeof(b));
	printf("%zd\n", sizeof(char*));

	//printf("%zd\n", sizeof int);     // ERROR
	//printf("%zd\n", sizeof char*);   // ERROR
	//printf("%zd\n", sizeof(int c));  // ERROR
	printf("%zd\n", sizeof a);
	printf("%zd\n", sizeof b);
	printf("%zd\n", sizeof "abcdefghij");



	// sizeof priority
	int x = 10;
	int y = 100;
	printf("%zd\n", sizeof x);
	printf("%zd\n", sizeof x + y);
	printf("%zd\n", sizeof(x + y));

	// sizeof structure;
	struct node n;
	//printf("%zd\n", sizeof struct node);   // ERROR
	printf("%zd\n", sizeof(struct node));
	printf("%zd\n", sizeof n);
	printf("%zd\n", sizeof(n));
	
	// no run time evaluation
	int k = 10;
	printf("%d\n", k);
	printf("%zd\n", sizeof(k));
	printf("%zd\n", sizeof(k++));
	printf("%zd\n", sizeof(++k));
	printf("%d\n", k);

	int l = 10;
	printf("%d\n", k);
	printf("%zd\n", sizeof l);
	printf("%zd\n", sizeof l++);
	printf("%zd\n", sizeof ++l);
	printf("%d\n", l);
}