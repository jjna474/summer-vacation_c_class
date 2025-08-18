#include<stdio.h>

void hello(char *name) {
	printf("안녕하세요. %s 님\n",name);
}

int main (void)
{
	char name[20];
	printf("이름을 입력하세요:");
	scanf_s("%s", name,(unsigned)sizeof(name));
	hello(name);
	 


	
	return 0;
}