#include<stdio.h>

#define NAME_LENGTH 10
#define PHONE 20

typedef int integer;

typedef struct student   //����ü�� �ڷ��� , �̸��� ����,�� ���� x
{
	char name[NAME_LENGTH];
	char phone[PHONE];//010 char�� ����
	integer age;
}std;

//typedef struct student std;


int main(void)
{
	std s1,s2;//s1�� ������, 34����Ʈ
	//s1.age = 20;

	printf("�̸�:");
	gets_s(s1.name, NAME_LENGTH);

	printf("��ȭ��ȣ:");
	gets_s(s1.phone, PHONE);

	printf("����:");
	scanf_s("%d", &s1.age);
	while (getchar() != '\n');//���� ����




	printf("�̸�:");
	gets_s(s2.name, NAME_LENGTH);

	printf("��ȭ��ȣ:");
	gets_s(s2.phone, PHONE);

	printf("����:");
	scanf_s("%d", &s2.age);

	printf("\n\n**�л� ���� �Է�**\n\n");
	printf("%3d %-20s%-20s%8d\n", 1, s1.name, s1.phone, s1.age);
	printf("%3d %-20s%-20s%8d\n", 2, s2.name, s2.phone, s2.age);


	return 0;
}