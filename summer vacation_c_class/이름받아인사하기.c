#include<stdio.h>

void hello(char *name) {
	printf("�ȳ��ϼ���. %s ��\n",name);
}

int main (void)
{
	char name[20];
	printf("�̸��� �Է��ϼ���:");
	scanf_s("%s", name,(unsigned)sizeof(name));
	hello(name);
	 


	
	return 0;
}