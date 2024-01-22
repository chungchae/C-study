#include <stdio.h>
#include <limits.h>

int main()
{
	int num1, num2;
	num1 = INT_MAX; //num1에 int형 변수의 최댓값 설정
	num2 = INT_MIN; //num2에 int형 변수의 최솟값 설정

	printf("%d", num1);
	printf("\n%d", num1 + 1); //최댓값에 1을 더해 오버플로우 발생
	printf("\n%d", num2);
	printf("\n%d", num2 - 1); //최솟값에 1을 빼 언더플로우 발생

	return 0;
}