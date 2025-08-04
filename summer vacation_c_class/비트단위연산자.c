#include<stdio.h>
int main(void)
{
	//&(and):대응하는 각 비트의 값이 모두 1이라면 1을 반환 아니면 0
	//|(or):대응한는 비트의 값 중 1이 하나라도 있으면 1을 반환
	//^(xor):대응하는 비트의 값이 다르면 1을 반환
	//~(not):비트의 값이 1이면 0으로, 0이라면 1로 반전시켜서 나타냄

	int bit_five = 5;//00000101
	int bit_three = 3;//00000011

	printf("%d & %d=%d\n", bit_five, bit_three, bit_five & bit_three);
	printf("%d | %d=%d", bit_five, bit_three, bit_five | bit_three);






	return 0;
}