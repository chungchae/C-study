#include <stdio.h>
#include <limits.h>

int main()
{
	int num1, num2;
	num1 = INT_MAX; //num1�� int�� ������ �ִ� ����
	num2 = INT_MIN; //num2�� int�� ������ �ּڰ� ����

	printf("%d", num1);
	printf("\n%d", num1 + 1); //�ִ񰪿� 1�� ���� �����÷ο� �߻�
	printf("\n%d", num2);
	printf("\n%d", num2 - 1); //�ּڰ��� 1�� �� ����÷ο� �߻�

	return 0;
}