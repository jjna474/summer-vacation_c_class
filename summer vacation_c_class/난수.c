#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int rad;
	srand((unsigned int)time(NULL));//��� ���ϴ� ���� �־������=�ð�,����ð��� �ʷ� �޴´�.
	rad = rand()%100+1;// rad=0~32767
	printf("%d", rad);
	return 0;
}