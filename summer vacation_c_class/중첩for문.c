#include<stdio.h>
int main(void)
{
	/*
	for(초기;조건;증감){
	     for(초기;조건;증감){

		 }
		 */

	int firstFor, secondFor;

	for (firstFor = 1; firstFor <= 3; firstFor++) {
		for (secondFor = 1; secondFor <= 2; secondFor++) {
			printf("%d행 %d열\n", firstFor, secondFor);
		}
		printf("\n");
	}

	int i, j;

	for (i = 2; i <= 9; i++) {
		printf("%d단\n",i);
		for (j = 1; j <= 10; j++) {
			printf("%d x %d=%d\n", i, j, i * j);
		}
		printf("\n");
	}



	return 0;
}