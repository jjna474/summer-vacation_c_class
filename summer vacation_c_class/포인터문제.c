#include<stdio.h>
int main(void)
{
	int dog = 4;

	int* dog_address = &dog;
	printf("%p\n", dog_address);
	printf("%d\n", *dog_address);
	printf("%d:%p\n", *dog_address, dog_address);

	int score[5] = { 10,20,30,40,50 };
	printf("%d", score[3]);//배열의 시작주소에 접근한다
	//&score[0]==score
	return 0;
}