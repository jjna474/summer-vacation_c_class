#include<stdio.h>
int main(void)
{
	//비교연산자 종류
	//a>b
	//a<b
	//a>=b
	//a<=b
	//a==b
	//a!=b
	//참 or 거짓 > true or false>1 or 0

	int a = 1, b = 10;
	printf("a>b:%d\n", a > b);
	printf("a<=b:%d\n",a <= b);
	printf("a==b:%d", a == b);
	printf("\n");

	//증감연산자
	//int a=++b;
	//먼저 ++b가 실행되어 b의 증가연산자가 먼저 실행되고, 증가된 값을 a에 대입
	//int a=b++;
	//먼저 a에다 b의 값을 대입한 후 b의 증가 실행

	int A = 10, B = 20;
	printf("A:%d\n", A);
	printf("A:%d\n", ++A);
	printf("A:%d\n", A);

	printf("B:%d\n", B);
	printf("B:%d\n", B++);
	printf("B:%d\n", B);
	printf("\n");

	int num1, num2, num3, num4, result;
	num1 = 3;
	num2 = 4;
	num3 = 5;
	num4 = 6;
	result = num1 + num2 * num3 + num4;
	printf("%d+%d*%d+%d=%d", num1, num2, num3, num4, result);


	return 0;
}