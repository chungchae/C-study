#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c, temp;
	scanf("%f %f %f", &a, &b, &c);
	if ((a >= b) && (a >= c))
	{
		temp = c;
		c = a;
		a = temp;
	}
	else if ((b >= a) && (b >= c))
	{
		temp = c;
		c = b;
		b = temp;
	}


	if (((a + b) < c))
		printf("삼각형이 아닙니다.");
	else if ((a == b) && (b == c))
		printf("정삼각형입니다.");
	else if ((a * a + b * b) > c * c)
		printf("예각삼각형입니다.");
	else if (((a * a + b * b) == c * c))
		printf("직각삼각형입니다.");
	else if (((a * a + b * b) < c * c))
		printf("둔각삼각형입니다.");
	
		
	return 0;
}