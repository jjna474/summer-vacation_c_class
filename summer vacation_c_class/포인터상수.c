#include<stdio.h>
int main(void)
{
	int x = 10, y = 20;
	int* const CONST_POINTER = &x;
	*CONST_POINTER = 30;
	printf("%d\n", *CONST_POINTER);

	//CONST_POINTER = &y;//const�����ϱ� ����

	/*
	const int *p-->���� ����� �ȴ�!(�ּ� ���� ����: �� ���� �Ұ�) �����Ͱ� ����Ű�� ���� �����.
	int const *p-->���� ����� �ȴ�!(�ּҺ��� ����:�� ���� �Ұ�)
	int *const p-->������(�ּҰ�)�� ���(�ּ� ���� �Ұ�:�� ���� ����) ������ ��ü�� ���
	const int *const p=&y; �ּҿ� ��� �� �� ���� �Ұ� 

	const�� ��ġ�� *�տ� �ٴ��� �ڿ� �ٴ��Ŀ� ���� ����� �Ǹ��� �޶���
	*�ڿ� const�� ������ �ּҰ� ����ΰ�
	*/

	const int* p = &y;
	//*p=30;
	p = &x;

	const int* const po = &y;
	//*po = 10;
	//po=&x;



	return 0;
}