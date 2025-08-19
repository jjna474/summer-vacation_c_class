#include<stdio.h>

#define NAME_LENGTH 10
#define PHONE 20

typedef int integer;

typedef struct student   //그조체는 자료형 , 이름이 없다,값 대입 x
{
	char name[NAME_LENGTH];
	char phone[PHONE];//010 char로 저장
	integer age;
}std;

//typedef struct student std;


int main(void)
{
	std s1,s2;//s1이 변수명, 34바이트
	//s1.age = 20;

	printf("이름:");
	gets_s(s1.name, NAME_LENGTH);

	printf("전화번호:");
	gets_s(s1.phone, PHONE);

	printf("나이:");
	scanf_s("%d", &s1.age);
	while (getchar() != '\n');//공백 제거




	printf("이름:");
	gets_s(s2.name, NAME_LENGTH);

	printf("전화번호:");
	gets_s(s2.phone, PHONE);

	printf("나이:");
	scanf_s("%d", &s2.age);

	printf("\n\n**학생 정보 입력**\n\n");
	printf("%3d %-20s%-20s%8d\n", 1, s1.name, s1.phone, s1.age);
	printf("%3d %-20s%-20s%8d\n", 2, s2.name, s2.phone, s2.age);


	return 0;
}