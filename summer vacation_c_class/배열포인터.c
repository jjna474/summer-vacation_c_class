#include<stdio.h>
int main(void)
{
	//�迭����Ʈ
	int arr[3] = { 1,2,3 };//���� 3���� �̷���� �迭
	int (*arrprt)[3] = &arr;//arr�迭 ��ü�� �ּҸ� ����Ű�� ������ ����
	printf("ù���� ��Ҵ�:%d\n", (*arrprt[0]));
	printf("�ι��� ��Ҵ�:%d\n", (*arrprt[1]));
	printf("������ ��Ҵ�:%d\n", (*arrprt[2]));

	int(*in)[2];

	return 0;
}