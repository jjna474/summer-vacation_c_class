#include<stdio.h>
int main(void)
{
	char string_text[] = "안녕하세요!";
	printf("문자열 변수 string_text의 길이는:%zu\n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("문자열 변수 english_text의 길이는:%zu\n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("문자열 변수 long_text의 길이는:%zu\n", sizeof(long_text));

	printf("배열 long_text에 저장된 문자열의 길이:%d\n", strlen(long_text));
	//strlen:초기화 되지 않은 공간은 포함하지 않는다.

	printf("%s\n", long_text);

	char question[30] = "My name is 진아";
	

	question[10] = '\0';
	printf("%s\n", question);
	return 0;
}