#include<stdio.h>
int main(void)
{
	/*
	for(초기값 ; 조건식; 증감식){
	조건이 참이라면 실행시킬 코드
	}
	*/

	int forNumber;

	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("반복 %d\n", forNumber);
	}

	int i;

	for (i = 10; i >= 1; i--) {
		printf("반복 %d\n", i);
	}

	int num;

	for (num = 1; num * num<=100; num++) {
		printf("%d의 제곱 : %d\n", num, num * num);
	}

	int square;
	for (square = 1; square <= 10; square++) {
		printf("%d의 제곱:%d\n", square, square * square);
	}

	//무한루프(while문이 조금더 많이 쓰인다.)
	for (;;) {

	}

	while (1) {
		printf("");
	}
	

	return 0;
}