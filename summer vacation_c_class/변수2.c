#include<stdio.h>
int main(void)
{
	printf("안녕하세요\n");
	printf("오늘은 3번째 날입니다.");

	int num = 3;//선언과 초기화 동시
	int num2;//선언
	num2 = 2;//초기화
	num2 = 5;//초기화

	int num3 = 3;
	num3 = 10;

	int num1, num2;// 선언
	num1 = 10;
	num2 = 20;

	int num3 = 30, num4 = 40;

	//변수명 규칙
	int number = 10;//영어로 구성 가능
	int num16 = 16;//숫자조합 가능
	int number_20 = 20;//언더바 가능
	int Number = 15;//대문자 가능

	//불가능한 변수명
	//int hello world = 1;//공백 불가
	//int he#$ = 2;//특수문자 불가
	//int 12number =12;//숫자로 시작 불가
	//int int =1;//예약어 사용 불가
	//int number - 14 = 14;//하이픈 불가(마이너스 연산자로 인식함)


 
	return 0;
}