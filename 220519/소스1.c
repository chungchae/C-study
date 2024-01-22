#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 100

void swaparray(int* arr1, int* arr2, int size1, int size2)
{
	int* arr1_end = arr1 + (size1 - 1); //Set end value using size value
	int* arr2_end = arr2 + (size2 - 1);
	int ivarr1 = arr1;
	int ivarr2 = arr2;

	printf("ù ��° �迭�� ���� �Է����ּ���: "); //Enter the first array
	while (arr1 <= arr1_end)
		scanf("%d", arr1++);

	printf("\n�� ��° �迭�� ���� �Է����ּ���: "); //Enter the second array
	while (arr2 <= arr2_end)
		scanf("%d", arr2++);

	arr1 = ivarr1;
	arr2 = ivarr2;

	printf("ù ��° �迭: "); //print entered array
	while (arr1 <= arr1_end)
	{
		printf("%d  ", *arr1);
		arr1++;
	}

	printf("�� ��° �迭: "); //print entered array
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

	printf("\n\n��ȯ �� �迭: \n\n"); //print exchanged value

	printf("ù ��° �迭: ");
	while (arr1 <= arr1_end)
	{
		printf("%d  ", *arr1);
		arr1++;
	}

	printf("\n�� ��° �迭: ");
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

	printf("ù ��° �迭�� ������ �Է��Ͻÿ�: ");
	scanf("%d", &size1);
	printf("\n�� ��° �迭�� ������ �Է��Ͻÿ�: ");
	scanf("%d", &size2);

	if (size1 != size2)
		printf("�߸��� ���� �ԷµǾ����ϴ�");
	else
	{
		swaparray(A, B, size1, size2);
	}
	return 0;
}

