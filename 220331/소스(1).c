#include <stdio.h>
int main()
{
	int a, b;
	printf("input number: ");
	scanf_s("%d %d", &a, &b); //input function
	printf("%d + %d= %d",a, b, a + b); //output function
	printf("\n%d - %d= %d", a, b, a - b); //output function
	printf("\n%d x %d= %d", a, b, a * b); //output function
	return 0;
}
