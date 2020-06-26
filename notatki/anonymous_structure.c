#include <stdio.h>
#include <inttypes.h>

struct V {
	int val;
	struct { 
		int val2; 
		int val3; 
	};
	int val4;
};

typedef struct {
	union {
		struct { uint8_t a, b, g, r; };
		uint32_t val;
	};
} Color;

int main()
{
	struct V v;
	v.val = 10;
	v.val2 = 20;
	v.val3 = 30;
	v.val4 = 40;

	Color x;
	x.r = 0x11;
	x.g = 0xAA;
	x.b = 0xCC;
	x.a = 0xFF;

	printf("%X\n", x.val);

	return 0;
}