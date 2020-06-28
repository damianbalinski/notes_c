#include <stdio.h>
#include <time.h>
void myprint1() { printf("test\n"); }
inline void myprint2() { printf("test\n"); }
static inline void myprint3() { printf("test\n"); }

void test1() { return 1111.1111 + 9999.9999; }
inline void test2() { return 1111.1111 + 9999.9999; }
static inline void test3() { return 1111.1111 + 9999.9999; }

void main()
{
	clock_t start, end;
	double time1, time2, time3;

	//printf("%p\n", myprint1);
	//printf("%p\n", myprint2);
	//printf("%p\n", myprint3);

	// REGULAR FUNCTION
	start = clock();
	for (int i = 0; i < 100000000; i++)
		test1();
	end = clock();
	time1 = (double)(end - start) / CLOCKS_PER_SEC;

	// INLINE
	start = clock();
	for (int i = 0; i < 100000000; i++)
		test2();
	end = clock();
	time2 = (double)(end - start) / CLOCKS_PER_SEC;

	// STATIC INLINE
	start = clock();
	for (int i = 0; i < 100000000; i++)
		test3();
	end = clock();
	time3 = (double)(end - start) / CLOCKS_PER_SEC;

	printf("time1: %f\n", time1);
	printf("time2: %f\n", time2);
	printf("time3: %f\n", time3);
}