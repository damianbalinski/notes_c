#include <stdio.h>
#include <float.h>

void main()
{
	printf("FLT_MANT_DIG   :  %d\n", FLT_MANT_DIG);
	printf("FLT_DIG        :  %d\n", FLT_DIG);
	printf("FLT_DECIMAL_DIG:  %d\n", FLT_DECIMAL_DIG);
	printf("FLT_MIN_10_EXP :  %d\n", FLT_MIN_10_EXP);
	printf("FLT_MAX_10_EXP :  %d\n", FLT_MAX_10_EXP);
	printf("FLT_MIN        :  %f\n", FLT_MIN);
	printf("FLT_MAX        :  %f\n", FLT_MAX);
	printf("FLT_EPSILON    :  %f\n", FLT_EPSILON);
}