#include<stdio.h>
main(void)
{
	//���ǽ�?������ �̰� ��µ˴ϴ�.(true):Ʋ���� �̰� ��µ˴ϴ�.(false)
	int ten = 10, twenty = 20;
	int max;

	max = ten > twenty ? ten : twenty;
	printf("�� ū ����:%d\n", max);

	int x,y;
	
	scanf_s("%d", &x);
	y = x /= 2;
	y = 0 ? 1 : 0;
	printf("�Է��� ���ڴ� %d�̸� ���:%d\n", x, y);

	int user_age, check);
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &user_age);

	check = user_age >= 20 ? 1280 : 800;
	printf("%d���� ����ö ����� %d�Դϴ�", user_age);

	int like_num, result;
	printf("�����ϴ� ���ڸ� �Է��ϼ���:");
	scanf_s("%d", &like_num);
	//like_num�� 2�� ���� ���� 0�̶�� ¦���̴�.

	result = (like_num % 2) == 0 ? 0 : 1;
	printf("�Է��� ���ڴ� %d�̸� �����:%d�̴�", like_num, result);



	return 0;
}