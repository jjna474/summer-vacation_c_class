#include<stdio.h>

void staticFunction()
{

	static int num = 0;
	num++;
	printf("num:%d\n", num);
}

int number = 50;


int localFunction(int a)
{
	int result = 5;
	return number + a;
}

int main(void)
{
	int a = 100;
	printf("%d\n", a);
	int result = localFunction(a);
	//int number = 40;

	printf("%d\n", result);
	printf("%d\n", number);//�̸��� �����ϴٸ� ������������ ����

	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();

	return 0;
}