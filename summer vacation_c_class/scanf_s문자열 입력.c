#include<stdio.h>
int main(void)
{
	//char scanf_string[50];
	//printf("scanf_s���ڿ��� �Է��ϼ���:");
	//scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string)); //���ڿ� &��� x 
	//&�ּ� scanf_string�� �迭�̱� ������ ��� x 
	//sizeof=�����
	//printf("%s\n", scanf_string);
	//%s: �����̳� �����̽�,�� ���� ������ �Է��� �����.

	char getString[50];
	printf("getString���ڿ��� �Է��ϼ���:");
	gets_s(getString, sizeof(getString));
	printf("%s\n", getString);
	//������ �߿��� �� ���
	//������ �ƴϸ� scanf_s���
	return 0;
}