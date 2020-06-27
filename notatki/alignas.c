#include <stdio.h>
#include <stdalign.h>

_Alignas(char) char z;
_Alignas(64) int foo();

int main()
{
	_Alignas(char) char a1;
	_Alignas(short) short a2;
	_Alignas(int) int a3;
	_Alignas(long) long a4;
	_Alignas(long long) long long a5;

	_Alignas(float) float b1;
	_Alignas(double) double b2;
	_Alignas(long double) long double b3;
	
	alignas(64) char c1;
	alignas(64) short c2;
	alignas(64) int c3;
	alignas(64) long c4;
	alignas(64) long long c5;

	alignas(64) float d1;
	alignas(64) double d2;
	alignas(64) long double d3;

	return 0;
}