#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, r, x, y;
	printf("원의 중심 a,b와 반지름 r을 입력하시오\n");
	scanf("%f %f %f", &a, &b, &r);
	printf("점 (x,y)의 좌표를 입력하시오\n");
	scanf("%f %f", &x, &y);

	if (((a - x) * (a - x) + (b - y) * (b - y)) > r * r)
		printf("점 (x,y)는 원 밖에 있습니다");
	else
		printf("점 (x,y)는 원 안에 있습니다");
	return 0;
}