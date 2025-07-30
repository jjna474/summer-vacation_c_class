#include<stdio.h>
int main(void)
{
	//아스키코드는 외우지 마 그냥 참고
	char ch1 = 'A';
	printf("%c\n", ch1);

	char ch2 = 65;
	printf("%c\n", ch2);

	printf("문자:%c,숫자 :%d\n", ch1, ch1);
	printf("문자:%c,숫자:%d\n", ch2, ch2);
	
    int n = 'A';
	printf("문자:%c,숫자 :%d\n", n,n);


	return 0;
}