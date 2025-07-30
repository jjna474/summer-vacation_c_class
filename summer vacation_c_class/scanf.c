#include<stdio.h>
main(void)
{
	//1.입력할 데이터의 자료형에 대응하는 형식문자
	//2.입력할 데이터가 저장될 메모리 공간이 필요
	//3.scanf->scanf_s
	int num;
	scanf_s("%d", &num);
	printf("\n");

	//scanf_s("입력:%d", &num);
	printf("입력:");
	scanf_s("%d", &num);
	



	return 0;
}