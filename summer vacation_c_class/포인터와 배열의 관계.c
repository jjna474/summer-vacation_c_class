#include<stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };//�迭�̸��� �����ּ� ����Ŵ
	int* p = a;

	int b = 5;
	int* bp = &b;
	//*bp = 10;
	bp[0] = 10;
	printf("%d\n", *bp);//�ε���=�ּҿ� �ִ� �� �������°�

	//�����ʹ� ���� ����


	return 0;
}