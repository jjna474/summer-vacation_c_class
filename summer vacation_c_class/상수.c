#include<stdio.h>
#define PI=3.14//매크로 상수
int main(void)
{
	//정수는 : int   실수 : double

	

	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(3.14f));

	printf("%d\n", 10);
	
	//리터럴 상수
	const int MYCONST = 55;
	//심볼릭 상수

	//const int MYCONST2;
	//MYCONST2 = 15;//문제 발생
	//선언과 초기화를 동시에 해야함 반드시
	//변수명 대문자로 쓰기

	return 0;

	
}