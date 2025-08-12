#include<stdio.h>
int main(void)
{
	int x = 10, y = 20;
	int* const CONST_POINTER = &x;
	*CONST_POINTER = 30;
	printf("%d\n", *CONST_POINTER);

	//CONST_POINTER = &y;//const있으니까 오류

	/*
	const int *p-->값이 상수가 된다!(주소 변경 가능: 값 변경 불가) 포인터가 가리키는 값이 상수다.
	int const *p-->값이 상수가 된다!(주소변경 가능:값 변경 불가)
	int *const p-->포인터(주소가)가 상수(주소 변경 불가:값 변경 가능) 포인터 자체가 상수
	const int *const p=&y; 주소와 상수 둘 다 변경 불가 

	const의 위치가 *앞에 붙느냐 뒤에 붙느냐에 따라 상수의 의마가 달라짐
	*뒤에 const가 붙으면 주소가 상수인것
	*/

	const int* p = &y;
	//*p=30;
	p = &x;

	const int* const po = &y;
	//*po = 10;
	//po=&x;



	return 0;
}