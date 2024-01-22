#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lottery_number(int A[1000][7]) //2���� �迭�� �Է¹޴� void�� �Լ� ����
{
	int i, j, k;
	srand(time(NULL)); 

	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 7; j++)
		{
			A[i][j] = rand() % 70 + 1; //A�� �� ��ҿ� 1���� 70������ ���� �Ҵ�
			for (k = 0; k < j; k++)
			{
				if (A[i][j] == A[i][k]) //�ߺ� ��Ұ� ������ j�� ���ҽ��� �ٽ� ���� �Ҵ�
					j--;
			}
		}
	}
}

int* lottery_result(int A[1000][7])
{
	int result, i, j, k;
	static int num[1000];
	srand(time(NULL));
	result = rand() % 1000; //�������� ��÷�� ����� �̾� result�� �Ҵ�
	printf("��÷: %d\n\n", result);
	printf("��÷ ��ȣ: ");
	for (i = 0; i < 7; i++)
		printf("%d ", A[result][i]); //��÷�� ��ȣ ���
	printf("\n\n");

	for (i = 0; i < 1000; i++)
		num[i] = 0; //��÷ ��ȣ�� ��ġ�ϴ� ������ �� ������ ������ num�迭 �ʱ�ȭ

	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 7; j++)
		{
			for (k = 0; k < 7; k++)
			{
				if (A[result][j] == A[i][k])
					num[i]++; //��÷ ��ȣ�� ��ġ�ϸ� num���� ����
			}
		}
	}
	return num; //�����ͷ� �迭 ��ȯ
}

int main()
{
	int A[1000][7];	
	int num[1000];
	lottery_number(A);
	int* arr;
		arr = lottery_result(A);
	for (int i = 0; i < 1000; i++)
		printf("%d ", arr[i]);

	return 0;
}
