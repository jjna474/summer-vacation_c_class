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
	printf("Ȧ���� ��: %d\n", sum);
	//2���� �迭=��ø for�� ,1���� �迭=for��

	return 0;
}