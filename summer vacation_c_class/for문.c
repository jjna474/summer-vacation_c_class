#include<stdio.h>
int main(void)
{
	/*
	for(�ʱⰪ ; ���ǽ�; ������){
	������ ���̶�� �����ų �ڵ�
	}
	*/

	int forNumber;

	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("�ݺ� %d\n", forNumber);
	}

	int i;

	for (i = 10; i >= 1; i--) {
		printf("�ݺ� %d\n", i);
	}

	int num;

	for (num = 1; num * num<=100; num++) {
		printf("%d�� ���� : %d\n", num, num * num);
	}

	int square;
	for (square = 1; square <= 10; square++) {
		printf("%d�� ����:%d\n", square, square * square);
	}

	//���ѷ���(while���� ���ݴ� ���� ���δ�.)
	for (;;) {

	}

	while (1) {
		printf("");
	}
	

	return 0;
}