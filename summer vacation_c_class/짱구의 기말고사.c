#include<stdio.h>
int main(void)
{
	int total;
	float avg;
	total = 68 + 75 + 88 + 60 + 96;
	avg = total / 5.0f; //�и� �Ǽ��� ����� 5.0�� double 5.0f �� flaot

	printf("%.1f\n", avg);

	float x= 64.0f + 56.0f + 87.5 + 76.8 + 96.9;
	float y = x / 5.0f;

	printf("ö���� ���:%.2f", y);

	return 0;


}