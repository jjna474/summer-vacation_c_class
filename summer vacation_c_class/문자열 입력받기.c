#include<stdio.h>
int main(void)
{
	char string_text[] = "�ȳ��ϼ���!";
	printf("���ڿ� ���� string_text�� ���̴�:%zu\n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("���ڿ� ���� english_text�� ���̴�:%zu\n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("���ڿ� ���� long_text�� ���̴�:%zu\n", sizeof(long_text));

	printf("�迭 long_text�� ����� ���ڿ��� ����:%d\n", strlen(long_text));
	//strlen:�ʱ�ȭ ���� ���� ������ �������� �ʴ´�.

	printf("%s\n", long_text);

	char question[30] = "My name is ����";
	

	question[10] = '\0';
	printf("%s\n", question);
	return 0;
}