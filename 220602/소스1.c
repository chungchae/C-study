#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student //����ü ����
{
	char name[10];
	int ID;
	char major[20];
	int age;
	char address[50];
};

int main()
{
	struct Student p[1000]; //����ü �迭 ����
	int num, i, x;
	int k = 0;
	char name_s[10]; //�˻��� �̸�
	char name_d[10]; //������ �̸�

	for (i = 0; i < 1000; i++) //����ü �迭 ��ҵ��� 0���� �ʱ�ȭ
	{
		strcpy(p[i].name ,"0");
		p[i].ID = 0;
		strcpy(p[i].major, "0");
		p[i].age = 0;
		strcpy(p[i].address, "0");
	}

	do //4�� �Էµ� ������ �ݺ�
	{
		printf("������ �޴��� �������ּ���:\n");
		printf("1: �̸� �˻� ��� \n2: �ű� �Է� ��� \n3: ���� ��� \n4: ���α׷� ����\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			k = 0;
			printf("\n�˻��� �̸��� �Է����ּ���: ");
			scanf("%s", name_s); //�Է¹��� �̸��� name_s�� ����
			for (i = 0; i < 1000; i++)
			{
				if (strcmp(p[i].name, name_s) == 0) //�Է¹��� �̸��� ��ġ�ϸ� �л� ������ ���
				{
					printf("�л� ����:\n");
					printf("�̸�: %s, �й�: %d, �а�: %s, ����: %d, �ּ�: %s\n\n", p[i].name, p[i].ID, p[i].major, p[i].age, p[i].address);
					k++; //��ġ�� �� k�� 1 ����
				}
			}
			if (k == 0)
				printf("��ġ�ϴ� �л��� �����ϴ�.\n");
			break;

		case 2:
			i = 0;
			while (p[i].ID != 0) //�迭 �ε��� ������� �Էµ�
				i++;
			if (i < 1000) //�Էµ� �л��� 1000���� ������ �Է¹���
			{
				x = i;
				printf("�л� ������ �Է����ּ���:\n");
				printf("\n�̸�:");
				scanf("%s", p[x].name);
				printf("\n�й�:");
				scanf("%d", &p[x].ID);
				printf("\n�а�:");
				scanf("%s", p[x].major);
				printf("\n����:");
				scanf("%d", &p[x].age);
				printf("\n�ּ�:");
				scanf("%s", p[x].address);
			}
			else //1000�� �̻��̸� ��� ���� ���
				printf("�Էµ� �л� ���� �ʰ��Ǿ����ϴ�.\n");
			break;
			
		case 3:
			k = 0;
			printf("������ �л��� �̸��� �Է����ּ���:");
			scanf("%s", name_d); //������ �л��� �̸��� name_d�� ����

			for (i = 0; i < 1000; i++)
			{
				if (strcmp(p[i].name, name_d) == 0)
				{
					printf("���� �л� ������ �����մϴ�.\n");
					printf("�̸�: %s, �й�: %d, �а�: %s, ����: %d, �ּ�: %s\n\n", p[i].name, p[i].ID, p[i].major, p[i].age, p[i].address);
					strcpy(p[i].name, "0");
					p[i].ID = 0;
					strcpy(p[i].major, "0");
					p[i].age = 0;
					strcpy(p[i].address, "0");
					printf("�����Ǿ����ϴ�.\n\n\n");
					k++;
				}
			}
			if (k == 0)
				printf("��ġ�ϴ� �л��� �����ϴ�.\n");

			break;
		}
	} while (num != 4);
}
