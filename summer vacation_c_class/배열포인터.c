#include<stdio.h>
int main(void)
{
	//배열포인트
	int arr[3] = { 1,2,3 };//정수 3개로 이루어진 배열
	int (*arrprt)[3] = &arr;//arr배열 자체의 주소를 가리키는 변수를 선언
	printf("첫번재 요소는:%d\n", (*arrprt[0]));
	printf("두번재 요소는:%d\n", (*arrprt[1]));
	printf("세번재 요소는:%d\n", (*arrprt[2]));

	int(*in)[2];

	return 0;
}