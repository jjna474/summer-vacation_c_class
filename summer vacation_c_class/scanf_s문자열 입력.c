#include<stdio.h>
int main(void)
{
	//char scanf_string[50];
	//printf("scanf_s문자열을 입력하세요:");
	//scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string)); //문자열 &사용 x 
	//&주소 scanf_string이 배열이기 때문에 사용 x 
	//sizeof=양수만
	//printf("%s\n", scanf_string);
	//%s: 공백이나 스페이스,탭 등을 만나면 입력을 멈춘다.

	char getString[50];
	printf("getString문자열을 입력하세요:");
	gets_s(getString, sizeof(getString));
	printf("%s\n", getString);
	//공백이 중요할 때 사용
	//공백이 아니면 scanf_s사용
	return 0;
}