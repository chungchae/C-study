#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 100

void matmul(int* arr1, int* arr2, int* arr3, int a, int b, int c, int d)
{
	int i, j, k, l, sum, x;

	int* arr1_end = arr1 + (a * b - 1);
	int* arr2_end = arr2 + (c * d - 1);
	int* arr3_end = arr3 + (a * d - 1);
	int* ivarr1 = arr1;
	int* ivarr2 = arr2;
	int* ivarr3 = arr3;


	printf("행렬 A의 요소를 입력하시오: ");

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("A[%d][%d]요소 입력: ", i, j);
			scanf("%d", arr1++);
		}
	}

	printf("행렬 B의 요소를 입력하시오: ");

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < d; j++)
		{
			printf("B[%d][%d]요소 입력: ", i, j);
			scanf("%d", arr2++);
		}
	}

	arr1 = ivarr1;
	arr2 = ivarr2;

	x = a >= d ? a : d;
	for (l = 0; l < b; l++)
	{
		for (i = 0; i < x; i++)
		{
			sum = 0;
			for (j = 0; j < b; j++)
			{
				sum += *(arr1 + l * b + j) * *(arr2 + i + j * d);
			}
			*arr3 = sum;
			arr3++;
		}
	}
}
void display(int* arr1, int* arr2, int* arr3, int a, int b, int c, int d)
{
	int i;
	for (i = 0; i < (a * b); i++)
	{
		printf("%d ", *arr1++);
		if ((i + 1) % b == 0)
			printf("\n\n");
	}
	printf("\n");
	for (i = 0; i < (c * d); i++)
	{
		printf("%d ", *arr2++);
		if ((i + 1) % d == 0)
			printf("\n\n");
	}
	printf("\n");
	for (i = 0; i < (a * d); i++)
	{
		printf("%d ", *arr3++);
		if ((i + 1) % d == 0)
			printf("\n\n");
	}
}

int main()
{
	int A[num]; int B[num]; int C[num];
	int a, b, c, d;

	printf("행렬 A=(axb)의 a,b 값을 입력하시오: ");
	scanf("%d %d", &a, &b);
	printf("행렬 B=(cxd)의 c,d 값을 입력하시오: ");
	scanf("%d %d", &c, &d);
	if (b != c)
		printf("잘못된 값이 입력되었습니다.");
	else
	{
		matmul(A, B, C, a, b, c, d);
		display(A, B, C, a, b, c, d);
	}
}
