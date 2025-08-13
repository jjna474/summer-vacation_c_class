#include<stdio.h>

void helloWorld() {
	printf("Hello world\n");
}

int add(int a, int b) {
	return a+b ;
}

void helloname(char* name) {
	printf("Hello,%s\n", name);
}

int main(void)
{
	helloWorld();// 함수 호출
	int sum = add(8,2);
	printf("sum:%d\n", sum);

	int sum2 = add(3, 5);
	printf("sum2:%d\n", sum2);

	helloname("진아");
	//int box = helloWorld(); void니까
	/*
	반환형 함수이름(매개변수){
	 return 0;
	 }

	 반환형:함수가 처리 결과를 반환할 때 자료형
	 함수이름:호출할 때 사용
	 매개변수:함수를 작동시킬 재료(무엇을 넣느냐에 따라 결과값이 달라짐)[없을 수도 있음]
	 return : 함수가 작업을 끝낸 뒤 호출한 곳으로 값을 돌려준다. void일때 return 생략 가능
	*/
	return 0;
}