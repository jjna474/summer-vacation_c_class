#include<stdio.h>
int main(void)
{
	//논리연산자종류
	//&&(and):그리고 (피연산자 중 하나라도 false라면 false)
	//||(or):또는(피연산자 중 하나만 true이면 true라는 결과값 반환)
	//!(not):논리부정(피연산자가 true라면 false를 출력)
	
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;

	printf("result:%d\n", result);
	
	result = !(one > two);
	printf("%d", result);




	return 0;
}