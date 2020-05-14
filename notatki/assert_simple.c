#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdarg.h>


void crash(char* format, ...) {
	va_list args;

	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);

	exit(EXIT_FAILURE);
}

void function(int val)
{
	//assert(val == 0);
	crash("data->value is %d, expected <= 100\n", val);
	printf("OK\n");
}

void main()
{
	function(1);
}