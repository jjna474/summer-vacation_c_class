#include<stdio.h>
#define PI=3.14//��ũ�� ���
int main(void)
{
	//������ : int   �Ǽ� : double

	

	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(3.14f));

	printf("%d\n", 10);
	
	//���ͷ� ���
	const int MYCONST = 55;
	//�ɺ��� ���

	//const int MYCONST2;
	//MYCONST2 = 15;//���� �߻�
	//����� �ʱ�ȭ�� ���ÿ� �ؾ��� �ݵ��
	//������ �빮�ڷ� ����

	return 0;

	
}