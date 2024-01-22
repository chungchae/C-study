#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 20

void enterdata(int A[][num], int B[][num], int row1, int col1, int row2, int col2)
{
	int i, j;
	printf("행렬 A를 입력하시오: \n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			printf("A[%d][%d]요소 입력: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("행렬 B를 입력하시오: \n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			printf("B[%d][%d]요소 입력: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
}

void matrixsum(int A[][num], int B[][num], int C[][num], int row1, int col1, int row2, int col2)
{
	int i, j;
	if ((row1 != row2) || (col1 != col2))
		printf("행렬 A와 행렬 B는 동일한 행과 열의 수를 가져야 합니다");
	else
	{
		for (i = 0; i < row1; ++i)
		{
			for (j = 0; j < col1; ++j)
			{
				C[i][j] = 0;
			}
		}

		for (i = 0; i < row1; ++i)
		{
			for (j = 0; j < col1; ++j)
			{
				C[i][j] = A[i][j] + B[i][j];
			}
		}
	}
}

void matrixsub(int A[][num], int B[][num], int C[][num], int row1, int col1, int row2, int col2)
{
	int i, j;
	if ((row1 != row2) || (col1 != col2))
		printf("행렬 A와 행렬 B는 동일한 행과 열의 수를 가져야 합니다");
	else
	{
		for (i = 0; i < row1; ++i)
		{
			for (j = 0; j < col1; ++j)
			{
				C[i][j] = 0;
			}
		}

		for (i = 0; i < row1; ++i)
		{
			for (j = 0; j < col1; ++j)
			{
				C[i][j] = A[i][j] - B[i][j];
			}
		}
	}
}

void matrixmul(int A[][num], int B[][num], int C[][num], int row1, int col1, int row2, int col2)
{
	int i, j, k;
	if (row2 != col1)
		printf("행렬 A의 행의 수와 행렬 B의 열의 수는 같아야 합니다.");
	else
	{
		for (i = 0; i < row1; ++i)
		{
			for (j = 0; j < col1; ++j)
			{
				C[i][j] = 0;
			}
		}

		for (i = 0; i < row1; ++i)
		{
			for (j = 0; j < col2; ++j)
			{
				for (k = 0; k < col1; ++k)
					C[i][j] = A[i][k] + B[k][j];
			}
		}
	}
}

void display(int C[][num], int row1, int col2)
{
	int i, j;
	printf("계산된 행렬: \n");
	for (i = 0; i < row1; ++i)
	{
		for (j = 0; j < col2; ++j)
		{
			printf("%d  ", C[i][j]);
			if (j == col2 - 1)
				printf("\n\n");
		}
	}
}

int main()
{
	int row1, col1, row2, col2;
	int A[num][num], B[num][num], C[num][num];

	printf("행렬 A의 행과 열의 수를 입력하시오: ");
	scanf("%d %d", &row1, &col1);
	printf("\n행렬 B의 행과 열의 수를 입력하시오: ");
	scanf("%d %d", &row2, &col2);

	
	enterdata(A, B, row1, col1, row2, col2);
	matrixsum(A, B, C, row1, col1, row2, col2);
	display(C, row1, col2);
	matrixsub(A, B, C, row1, col1, row2, col2);
	display(C, row1, col2);
	matrixmul(A, B, C, row1, col1, row2, col2);
	display(C, row1, col2);
}