#include<stdio.h>
#define BRAND_NAME 30

typedef struct car
{
	char brand[BRAND_NAME];
	int year;
}car;

int main(void)
{
	car myCar = { "Tesla",2023 };
	car* ptr = &myCar;

	printf("�귣��:%s\n", ptr->brand);//����ü�� �������Ҷ� ->���
	printf("����:%d\n", ptr->year);

	return 0;
}