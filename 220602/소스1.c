#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student //구조체 선언
{
	char name[10];
	int ID;
	char major[20];
	int age;
	char address[50];
};

int main()
{
	struct Student p[1000]; //구조체 배열 선언
	int num, i, x;
	int k = 0;
	char name_s[10]; //검색할 이름
	char name_d[10]; //삭제할 이름

	for (i = 0; i < 1000; i++) //구조체 배열 요소들을 0으로 초기화
	{
		strcpy(p[i].name ,"0");
		p[i].ID = 0;
		strcpy(p[i].major, "0");
		p[i].age = 0;
		strcpy(p[i].address, "0");
	}

	do //4가 입력될 때까지 반복
	{
		printf("실행할 메뉴를 선택해주세요:\n");
		printf("1: 이름 검색 기능 \n2: 신규 입력 기능 \n3: 삭제 기능 \n4: 프로그램 종료\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			k = 0;
			printf("\n검색할 이름을 입력해주세요: ");
			scanf("%s", name_s); //입력받은 이름을 name_s에 저장
			for (i = 0; i < 1000; i++)
			{
				if (strcmp(p[i].name, name_s) == 0) //입력받은 이름과 일치하면 학생 정보를 출력
				{
					printf("학생 정보:\n");
					printf("이름: %s, 학번: %d, 학과: %s, 나이: %d, 주소: %s\n\n", p[i].name, p[i].ID, p[i].major, p[i].age, p[i].address);
					k++; //일치할 시 k가 1 증가
				}
			}
			if (k == 0)
				printf("일치하는 학생이 없습니다.\n");
			break;

		case 2:
			i = 0;
			while (p[i].ID != 0) //배열 인덱스 순서대로 입력됨
				i++;
			if (i < 1000) //입력된 학생이 1000명보다 작으면 입력받음
			{
				x = i;
				printf("학생 정보를 입력해주세요:\n");
				printf("\n이름:");
				scanf("%s", p[x].name);
				printf("\n학번:");
				scanf("%d", &p[x].ID);
				printf("\n학과:");
				scanf("%s", p[x].major);
				printf("\n나이:");
				scanf("%d", &p[x].age);
				printf("\n주소:");
				scanf("%s", p[x].address);
			}
			else //1000명 이상이면 경고 문구 출력
				printf("입력된 학생 수가 초과되었습니다.\n");
			break;
			
		case 3:
			k = 0;
			printf("삭제할 학생의 이름을 입력해주세요:");
			scanf("%s", name_d); //삭제할 학생의 이름을 name_d에 저장

			for (i = 0; i < 1000; i++)
			{
				if (strcmp(p[i].name, name_d) == 0)
				{
					printf("다음 학생 정보를 삭제합니다.\n");
					printf("이름: %s, 학번: %d, 학과: %s, 나이: %d, 주소: %s\n\n", p[i].name, p[i].ID, p[i].major, p[i].age, p[i].address);
					strcpy(p[i].name, "0");
					p[i].ID = 0;
					strcpy(p[i].major, "0");
					p[i].age = 0;
					strcpy(p[i].address, "0");
					printf("삭제되었습니다.\n\n\n");
					k++;
				}
			}
			if (k == 0)
				printf("일치하는 학생이 없습니다.\n");

			break;
		}
	} while (num != 4);
}
