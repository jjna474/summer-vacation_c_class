#include<stdio.h>
int main(void)
{
	/*
	if(���ǽ�){
	������ ������ ��� ������ �ڵ带 �ۼ�;
	}

	if(���ǽ�)
	������ ������ ��� ������ �ڵ带 �ۼ�;

	if(���ǽ�){
	������ ������ ��� ������ �ڵ带 �ۼ�;
	}
	else{
	������ ���� false��� �� ���� �����
	}
	*/

	int if_number = 10;

	if (if_number < 500) {
		printf("%d�� 500���� �۽��ϴ�.\n", if_number);
	}
	if (if_number == 3) {
		printf("%d�� 3�� ����.\n", if_number);
	}
	
	int x;

	scanf_s("%d", &x);

	if (x >= 10000) {
		printf("�Ϸ翡 %d�� �ȴٴ� ����ؿ�! ���� �����Դϴ�!", x);
	}
	
	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha�� B�� �����ϴ�.");
	}
	else {
		printf("alpha�� B�� �ٸ��ϴ�.\n");
	}

	int y;
	printf("����� �����ϴ� ���ڴ�?");
	scanf_s("%d", &y);

	if (y >= 10) {
		printf("10�̻��̱���");
	}
	else {
		printf("10�̻��� �ƴϱ���");
	}
	return 0;
}