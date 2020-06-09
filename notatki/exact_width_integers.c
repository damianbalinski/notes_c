#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#define NUM 100;
void main()
{
	// EXACT WIDTH TYPES
	int8_t a = NUM;
	int16_t b;
	int32_t c;
	int64_t d;
	uint8_t e;
	uint16_t f;
	uint32_t g;
	uint64_t h;

	printf("PRId8 : %s\n", PRId8);
	printf("PRId16: %s\n", PRId16);
	printf("PRId32: %s\n", PRId32);
	printf("PRId64: %s\n", PRId64);
	printf("PRIu8 : %s\n", PRIu8);
	printf("PRIu16: %s\n", PRIu16);
	printf("PRIu32: %s\n", PRIu32);
	printf("PRIu64: %s\n", PRIu64);
	printf("\n");

	printf("SCNd8 : %s\n", SCNd8);
	printf("SCNd16: %s\n", SCNd16);
	printf("SCNd32: %s\n", SCNd32);
	printf("SCNd64: %s\n", SCNd64);
	printf("SCNu8 : %s\n", SCNu8);
	printf("SCNu16: %s\n", SCNu16);
	printf("SCNu32: %s\n", SCNu32);
	printf("SCNu64: %s\n", SCNu64);
}