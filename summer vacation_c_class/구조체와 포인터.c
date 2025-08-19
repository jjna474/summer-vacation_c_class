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

	printf("브랜드:%s\n", ptr->brand);//구조체로 역참조할때 ->사용
	printf("연식:%d\n", ptr->year);

	return 0;
}