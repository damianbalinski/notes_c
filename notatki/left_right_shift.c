#include <stdio.h>

int main()
{
	unsigned char c1 = 0b10101010;
	unsigned char c2 = 0b10101010;

	for (int i = 0; i < 8; i++)
	{
		printf("%hhX  %hhX\n", c1, c2);
		c1 >>= 1, c2 <<= 1;
	}
}