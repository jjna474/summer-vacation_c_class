#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int rad;
	srand((unsigned int)time(NULL));//계속 변하는 값을 넣어줘야함=시간,현재시간을 초로 받는다.
	rad = rand()%100+1;// rad=0~32767
	printf("%d", rad);
	return 0;
}