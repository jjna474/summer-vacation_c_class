#include<stdio.h>
int main(void)
{
	//�迭�� �̸�:������ ����
	//�迭�� ���� �ڷ��� �ʿ�
	//�迭�� ����:�迭�� ���Ե� �������� ����

	int numbers[5] = { 10,20,30,40,50 };//[�ε���]0����, �ʱ�ȭ����Ʈ , ����� ���� �ʱ�ȭ
	//int numbers[] = {1,2,3};
	numbers[0] = 100;
	int max;
	max = numbers[0];
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
			
		}
		
	}
	
	printf("%d", max);
	return 0;
}