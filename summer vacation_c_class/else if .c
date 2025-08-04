#include<stdio.h>
int main(void)
{
	/*
	if(조건문){
	조건문을 만족할 경우 실행
	}
	else if(조건문2){
	조건문을 만족하지 않고 조건문2를 만족한다면 실행
	}
	else if(조건문3){
	조건문과 조건문2를 만족하지 않고 조건문3을 만족한다면 실행
	}
	else{
	위 모든 족족하지 않을 경우 실행
	}
	*/
	int number;
	printf("숫자 입력:");
	scanf_s("%d", &number);
	if (number > 3) {
		printf("고양이");
	}
	else if (number == 1) {
		printf("강아지");
	}
	else {
		printf("햄스터");
	}


	return 0;
}