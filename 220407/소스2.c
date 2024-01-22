#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char a, b;
	scanf("%c %c", &a, &b);
	a -= 48;
	b -= 48;
	printf("%d + %d = %d", a, b, a + b);
	printf("\n%d - %d = %d", a, b, a - b);
	printf("\n%d * %d = %d", a, b, a * b);
	printf("\n%d / %d = %d", a, b, a / b);

	return 0;
}