#include<stdio.h>
int main(void)
{
	int arr[8] = {1,2,3,4,5,6,7,8};
	int* ptr = &arr[7];

	int sum=0;
	for (int i= 0; i <8; i++) {
		if (*ptr % 2 != 0) {
			sum += *ptr;
		
		}
		ptr--;
	}
	printf("홀수의 합: %d\n", sum);
	//2차원 배열=중첩 for문 ,1차원 배열=for문

	return 0;
}