#include<stdio.h>
int main(void)
{
	int x;
	printf("학점을 입력하세요:");
	scanf_s("%d", &x);

	if (x >= 90) {
		printf("A");
	}
	else if (x >= 80) {
		printf("B");
	}
	else if(x >= 70) {
		printf("C");
	}
	else if (x >= 60) {
		printf("D");
	}
	else {
		printf("재시험 당첨");
	}
	return 0;
}