#include<stdio.h>
int main(void)
{
	//������������
	//&&(and):�׸��� (�ǿ����� �� �ϳ��� false��� false)
	//||(or):�Ǵ�(�ǿ����� �� �ϳ��� true�̸� true��� ����� ��ȯ)
	//!(not):������(�ǿ����ڰ� true��� false�� ���)
	
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;

	printf("result:%d\n", result);
	
	result = !(one > two);
	printf("%d", result);




	return 0;
}