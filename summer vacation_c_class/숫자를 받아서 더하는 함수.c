#include<stdio.h>

int multifly(int a, int b) {
	return a * b;
}

int main(void)
{
	int num1, num2;
	printf("ù��° ���ڸ� �Է��ϼ���:");
	scanf_s("%d", &num1);
	printf("�ι��� ���ڸ� �Է��ϼ���:");
	scanf_s("%d", &num2);

	int result = multifly(num1, num2);

	printf("���ϱ� ���� ���:%d * %d= %d", num1, num2, result);
	return 0;
}