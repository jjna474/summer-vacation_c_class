#include<stdio.h>
int main(void)
{
	int hi = 1;
	while (hi <= 10) {
		printf("�ȳ��ϼ��� %d\n", hi);
		hi++;
	}

	//while�� ������ 6��
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d\n", six);
		}
		six++;
	}

	int num;
	printf("���ڸ� �Է��ϼ���(0�� �Է��ϸ� ����˴ϴ�).");
	scanf_s("%d", &num);

	while (num != 0) {
		printf("�Է��� ���ڴ� %d�Դϴ�. �ٽ� �Է�(0�Է½�����)", num);
		scanf_s("%d", &num);

	}
	printf("���α׷��� �����մϴ�.");
	


	return 0;
}