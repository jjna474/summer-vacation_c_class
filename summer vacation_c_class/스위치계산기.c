#include<stdio.h>
int main(void)
{
	int num1, num2;//숫자 두개
	char math;

	printf("연산자를 입력하세요.(+ - * /):");
	scanf_s("%c", &math,1);
	scanf_s("%d %d", &num1, &num2);

	switch (math) {
	case '+':
		printf("결과:%d", num1 + num2);
		break;
	case'*':
		printf("결과:%d", num1 * num2);
		break;
	case'-':
		printf("결과:%d", num1 - num2);
		break;
	case'/':
		
		if (num2 != 0) {
			printf("%d/%d=%d",num1,num2,num1/num2);
		}
		else {
			printf("0으로 나눌 수 없습니다.");
		}
		break;
	default:
		printf("유효하지 않은 값을 입력했습니다. 프로그램을 재실행하세요.");
	}

	return 0;
}