#include <stdio.h>
#define MAX 128

int main(void)
{
	char str1[MAX] = "abc" "def";
	char str2[MAX] = "abc\
def";

	printf("%s\n", str1);
	printf("%s\n", str2);

	return 0;
}