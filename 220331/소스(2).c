#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
	char char1 = CHAR_MIN; 
	char char2 = CHAR_MAX;
	printf("%d %d", char1, char2);

	int int1 = INT_MIN;
	int int2 = INT_MAX;
	printf("\n\n%d %d", int1, int2);

	double dbl1 = DBL_MIN;
	double dbl2 = DBL_MAX;
	printf("\n\n%lf %lf", dbl1, dbl2);

	float flt1 = FLT_MIN;
	float flt2 = FLT_MAX;
	printf("\n\n%f %f", flt1, flt2);

	return 0;

}