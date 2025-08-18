#include<stdio.h>

int multifly(int a, int b) {
	return a * b;
}

int main(void)
{
	int num1, num2;
	printf("첫번째 숫자를 입력하세요:");
	scanf_s("%d", &num1);
	printf("두번재 숫자를 입력하세요:");
	scanf_s("%d", &num2);

	int result = multifly(num1, num2);

	printf("곱하기 연산 결과:%d * %d= %d", num1, num2, result);
	return 0;
}