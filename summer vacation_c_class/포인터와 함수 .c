#include<stdio.h>

void swap(int * x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{

	int a = 3, b = 5;
	swap(&a,&b);
	printf("%d %d", a, b);
	return 0;
	/*
	call-by-value : 복사하는 원리( 값 전달)
	call-by-reference : 주소를 전달하는 원리
	*/
}