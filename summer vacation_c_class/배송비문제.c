#include<stdio.h>
int main(void)
{
	int totalPrice, member;
	printf("���űݾ��� �Է��ϼ���:");
	scanf_s("%d", &totalPrice);

	printf("ȸ������ Ȯ���ϼ���(ȸ��:1 /��ȸ��:0) :");
	scanf_s("%d", &member);

	if (totalPrice>=100000) {
		printf("100,000�� �̻� ���ŷ� ����ǰ�� �����˴ϴ�.");
		if(member==1){
			printf("50,000�� �̻� ���� ȸ���� ��ۺ� �����Դϴ�.");
		}
		else {
			printf("��ȸ�� ��ۺ� 5,000�� �ΰ��˴ϴ�.");

		}
	}
	else if(totalPrice>=50000){
		if (member == 1) {
			printf("ȸ�� 50000�̻� ���� ���� ��ۺ� �����Դϴ�.");
		}
		else {
			printf("��ȸ���� ��ۺ� 5000�� �ΰ��˴ϴ�.");
		}
	}
	else {
		printf("���ű޾��� 50,000�̸��Դϴ�. ��ۺ�� 5000�� �ΰ��˴ϴ�.");
	}


	return 0;
}