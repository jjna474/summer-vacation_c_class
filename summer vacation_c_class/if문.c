#include<stdio.h>
int main(void)
{
	/*
	if(조건식){
	조건을 만족할 경우 실행할 코드를 작성;
	}

	if(조건식)
	조건을 만족할 경우 실행할 코드를 작성;

	if(조건식){
	조건을 만족할 경우 실행할 코드를 작성;
	}
	else{
	조건의 값이 false라면 이 값이 실행됨
	}
	*/

	int if_number = 10;

	if (if_number < 500) {
		printf("%d가 500보다 작습니다.\n", if_number);
	}
	if (if_number == 3) {
		printf("%d와 3은 같다.\n", if_number);
	}
	
	int x;

	scanf_s("%d", &x);

	if (x >= 10000) {
		printf("하루에 %d보 걷다니 대단해요! 좋은 습관입니다!", x);
	}
	
	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha는 B와 같습니다.");
	}
	else {
		printf("alpha는 B와 다릅니다.\n");
	}

	int y;
	printf("당신이 좋아하는 숫자는?");
	scanf_s("%d", &y);

	if (y >= 10) {
		printf("10이상이군요");
	}
	else {
		printf("10이상이 아니군요");
	}
	return 0;
}