#include <stdio.h>
#include <signal.h>

int main(void)
{
	sig_atomic_t a = 10;

	signal(SIGINT, SIG_DFL);
	SIG_ERR;

	putchar('a');
	return 0;
}