#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("���� �Է�: ");
	scanf("%d", &input);
	printf("�Է°�: %d\n", input);
	printf("�ּҰ�: %u(������), %p(16����)\n", &input, &input);
	printf("�ּҰ�: %d(������), %#p(16����)\n", &input, &input);
	printf("�ּҰ� ũ��: %d\n", sizeof(&input));

	return 0;
}