#include<stdio.h>
int main(void)
{
	/*
	for(�ʱ�;����;����){
	     for(�ʱ�;����;����){

		 }
		 */

	int firstFor, secondFor;

	for (firstFor = 1; firstFor <= 3; firstFor++) {
		for (secondFor = 1; secondFor <= 2; secondFor++) {
			printf("%d�� %d��\n", firstFor, secondFor);
		}
		printf("\n");
	}

	int i, j;

	for (i = 2; i <= 9; i++) {
		printf("%d��\n",i);
		for (j = 1; j <= 10; j++) {
			printf("%d x %d=%d\n", i, j, i * j);
		}
		printf("\n");
	}



	return 0;
}