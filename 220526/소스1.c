#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lottery_number(int A[1000][7]) //2차원 배열을 입력받는 void형 함수 선언
{
	int i, j, k;
	srand(time(NULL)); 

	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 7; j++)
		{
			A[i][j] = rand() % 70 + 1; //A의 각 요소에 1부터 70까지의 난수 할당
			for (k = 0; k < j; k++)
			{
				if (A[i][j] == A[i][k]) //중복 요소가 있으면 j를 감소시켜 다시 난수 할당
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
	result = rand() % 1000; //랜덤으로 당첨된 사람을 뽑아 result에 할당
	printf("당첨: %d\n\n", result);
	printf("당첨 번호: ");
	for (i = 0; i < 7; i++)
		printf("%d ", A[result][i]); //당첨된 번호 출력
	printf("\n\n");

	for (i = 0; i < 1000; i++)
		num[i] = 0; //당첨 번호와 일치하는 숫자의 각 개수를 저장할 num배열 초기화

	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 7; j++)
		{
			for (k = 0; k < 7; k++)
			{
				if (A[result][j] == A[i][k])
					num[i]++; //당첨 번호와 일치하면 num값을 증가
			}
		}
	}
	return num; //포인터로 배열 반환
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
