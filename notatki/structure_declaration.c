#include <stdio.h>

struct A {
	int val;
	char str[10];
};

struct B {
	int val;
	char str[10];
} b = { 10, "xyz" };

struct {
	int val;
	char str[10];
} c;

struct {
	int val;
	char str[10];
};

int main()
{
	return 0;
}