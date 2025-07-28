#include<stdio.h>
int main(void)
{
	unsigned int max_number = 2200000000;
	printf("%u\n", max_number);

	int num1 = 1;
	printf("%zu", sizeof(num1));
	printf("%zu", sizeof(100));
	printf("%zu", sizeof(3.14));
	return 0;

}