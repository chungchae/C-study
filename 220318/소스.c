#include <stdio.h>
int main(void)
{
	int k; 
	int a;
	for (a = 2; a < 10; a++) //initial value of a:2, increase from 2 to 9
	{
		for (k = 1; k < 10; k++) //k increase from 1 to 9
		{
			printf("%dx%d=%d ", a, k, a * k); //print value of a, k, axk
		}
		printf("\n");
	}
	return 0;
}