#include<stdio.h>
int main(void)
{
	int num1, num2;//���� �ΰ�
	char math;

	printf("�����ڸ� �Է��ϼ���.(+ - * /):");
	scanf_s("%c", &math,1);
	scanf_s("%d %d", &num1, &num2);

	switch (math) {
	case '+':
		printf("���:%d", num1 + num2);
		break;
	case'*':
		printf("���:%d", num1 * num2);
		break;
	case'-':
		printf("���:%d", num1 - num2);
		break;
	case'/':
		
		if (num2 != 0) {
			printf("%d/%d=%d",num1,num2,num1/num2);
		}
		else {
			printf("0���� ���� �� �����ϴ�.");
		}
		break;
	default:
		printf("��ȿ���� ���� ���� �Է��߽��ϴ�. ���α׷��� ������ϼ���.");
	}

	return 0;
}