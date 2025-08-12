#include<stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };//배열이름이 시작주소 가리킴
	int* p = a;

	int b = 5;
	int* bp = &b;
	//*bp = 10;
	bp[0] = 10;
	printf("%d\n", *bp);//인덱스=주소에 있는 값 가져오는거

	//포인터는 참조 가능


	return 0;
}