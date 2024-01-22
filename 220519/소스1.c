#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 100

void swaparray(int* arr1, int* arr2, int size1, int size2)
{
	int* arr1_end = arr1 + (size1 - 1); //Set end value using size value
	int* arr2_end = arr2 + (size2 - 1);
	int ivarr1 = arr1;
	int ivarr2 = arr2;

	printf("첫 번째 배열의 값을 입력해주세요: "); //Enter the first array
	while (arr1 <= arr1_end)
		scanf("%d", arr1++);

	printf("\n두 번째 배열의 값을 입력해주세요: "); //Enter the second array
	while (arr2 <= arr2_end)
		scanf("%d", arr2++);

	arr1 = ivarr1;
	arr2 = ivarr2;

	printf("첫 번째 배열: "); //print entered array
	while (arr1 <= arr1_end)
	{
		printf("%d  ", *arr1);
		arr1++;
	}

	printf("두 번째 배열: "); //print entered array
	while (arr2 <= arr2_end)
	{
		printf("%d  ", *arr2);
		arr2++;
	}
	arr1 = ivarr1;
	arr2 = ivarr2;

	while ((arr1 <= arr1_end) && (arr2 <= arr2_end)) //Array value exchange
	{
		*arr1 ^= *arr2;
		*arr2 ^= *arr1;
		*arr1 ^= *arr2;
		arr1++; arr2++;
	}

	arr1 = ivarr1;
	arr2 = ivarr2;

	printf("\n\n교환 후 배열: \n\n"); //print exchanged value

	printf("첫 번째 배열: ");
	while (arr1 <= arr1_end)
	{
		printf("%d  ", *arr1);
		arr1++;
	}

	printf("\n두 번째 배열: ");
	while (arr2 <= arr2_end)
	{
		printf("%d  ", *arr2);
		arr2++;
	}
}

int main()
{
	int A[NUM];
	int B[NUM];

	int size1, size2;

	printf("첫 번째 배열의 개수를 입력하시오: ");
	scanf("%d", &size1);
	printf("\n두 번째 배열의 개수를 입력하시오: ");
	scanf("%d", &size2);

	if (size1 != size2)
		printf("잘못된 값이 입력되었습니다");
	else
	{
		swaparray(A, B, size1, size2);
	}
	return 0;
}

