#include<stdio.h>
int main(void)
{
	int age;
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);

	if ((0<=age)&&(age<=7) ) {
		printf("������� 800���Դϴ�.");
	}
	else if ((8<=age)&&(age<=19)) {
		printf("������� 1200���Դϴ�.");
	}
	else if( (20<=age)&&(age<=34)) {
		printf("������� 1600���Դϴ�.");
	}
	else if( ( 35<=age)&&(age<=59)){
		printf("������� 2000���Դϴ�.");
	}
	else if ((60<=age)&&(age<=150)) {
		printf("������� �����Դϴ�.");
	}
	else {
		printf("���� �߸��Ǿ����ϴ�.");
	}

	return 0;
}