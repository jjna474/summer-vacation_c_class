#include<stdio.h>

void helloWorld() {
	printf("Hello world\n");
}

int add(int a, int b) {
	return a+b ;
}

void helloname(char* name) {
	printf("Hello,%s\n", name);
}

int main(void)
{
	helloWorld();// �Լ� ȣ��
	int sum = add(8,2);
	printf("sum:%d\n", sum);

	int sum2 = add(3, 5);
	printf("sum2:%d\n", sum2);

	helloname("����");
	//int box = helloWorld(); void�ϱ�
	/*
	��ȯ�� �Լ��̸�(�Ű�����){
	 return 0;
	 }

	 ��ȯ��:�Լ��� ó�� ����� ��ȯ�� �� �ڷ���
	 �Լ��̸�:ȣ���� �� ���
	 �Ű�����:�Լ��� �۵���ų ���(������ �ִ��Ŀ� ���� ������� �޶���)[���� ���� ����]
	 return : �Լ��� �۾��� ���� �� ȣ���� ������ ���� �����ش�. void�϶� return ���� ����
	*/
	return 0;
}