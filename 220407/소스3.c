#include <stdio.h>
int main()
{
	printf("\0"); //널문자
	printf("\a"); //경고음이 출력된다.
	printf("\b"); //커서가 한 칸 뒤로 옮겨진다.
	printf("\t"); //커서를 다음 탭 위치로 옮긴다.
	printf("\n"); //커서가 다음 라인의 시작 위치로 옮겨진다.
	printf("\v"); //커서가 다음 수직 탭으로 설정되어있는 위치로 옮겨진다.
	printf("\f"); //프린트 출력 시 이번 페이지를 끝내고 다음 페이지로 옮길 때 사용한다.
	printf("\r"); //줄의 맨 처음으로 이동한다.
	printf("\""); //'"'가 출력된다.
	printf("\'"); //'''가 출력된다.
	printf("\\"); //'\'가 출력된다.
}