#include<stdio.h>
int main(void)
{
	int age;
	printf("나이를 입력하세요:");
	scanf_s("%d", &age);

	if ((0<=age)&&(age<=7) ) {
		printf("버스비는 800원입니다.");
	}
	else if ((8<=age)&&(age<=19)) {
		printf("버스비는 1200원입니다.");
	}
	else if( (20<=age)&&(age<=34)) {
		printf("버스비는 1600원입니다.");
	}
	else if( ( 35<=age)&&(age<=59)){
		printf("버스비는 2000원입니다.");
	}
	else if ((60<=age)&&(age<=150)) {
		printf("버스비는 무료입니다.");
	}
	else {
		printf("무언가 잘못되었습니다.");
	}

	return 0;
}