#include <stdio.h>

int main()
{
	int i, j, k;
	scanf_s("%d", &i);

	for (j = 0; j < i; j++)
	{
		for (k = i - j; k > 1; k--)
			printf(" ");
		for (k = 0; k < 2 * j + 1; k++)
			printf("*");
		printf("\n");
	}
	printf("\n");
	for (j = 0; j < i; j++)
	{
		for (k = 0; k < j; k++)
			printf(" ");
		for (k = 2 * i - 1 - 2 * j; k > 0; k--)
			printf("*");
		printf("\n");
	}
	printf("\n");
	for (j = 0; j < i/2+1; j++)
	{
		for (k = i- j-1 ; k > 0; k--)
			printf(" ");
		for (k = 0; k < 2 * j + 1; k++)
			printf("*");
		printf("\n");
	}
	for (j = i/2; j >0; j--)
	{
		for (k = 0; k < i - j; k++)
			printf(" ");
		for (k = 2 * j - 1; k > 0; k--)
			printf("*");
		printf("\n");
	}
}