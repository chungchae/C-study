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
		printf("�ﰢ���� �ƴմϴ�.");
	else if ((a == b) && (b == c))
		printf("���ﰢ���Դϴ�.");
	else if ((a * a + b * b) > c * c)
		printf("�����ﰢ���Դϴ�.");
	else if (((a * a + b * b) == c * c))
		printf("�����ﰢ���Դϴ�.");
	else if (((a * a + b * b) < c * c))
		printf("�а��ﰢ���Դϴ�.");
	
		
	return 0;
}