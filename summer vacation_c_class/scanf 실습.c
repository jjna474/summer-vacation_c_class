#include<stdio.h>
main(void)
{
	int x, y, z, total;

	printf("정수 3개 입력:");
	scanf_s("%d %d %d", &x, &y, &z);
	total = x + y + z;
	printf("%d+%d+%d=%d\n", x, y, z, total);

	float fnum;
	printf("실수 입력:");
	scanf_s("%f", &fnum);
	printf("입력된 값:%.2f\n", fnum);

	float scanf_pi;
	printf("원주율 입력:");
	scanf_s("%f", &scanf_pi);
	printf("입력된 값:%.4f", scanf_pi);

	

	return 0;
}