#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, r, x, y;
	printf("���� �߽� a,b�� ������ r�� �Է��Ͻÿ�\n");
	scanf("%f %f %f", &a, &b, &r);
	printf("�� (x,y)�� ��ǥ�� �Է��Ͻÿ�\n");
	scanf("%f %f", &x, &y);

	if (((a - x) * (a - x) + (b - y) * (b - y)) > r * r)
		printf("�� (x,y)�� �� �ۿ� �ֽ��ϴ�");
	else
		printf("�� (x,y)�� �� �ȿ� �ֽ��ϴ�");
	return 0;
}