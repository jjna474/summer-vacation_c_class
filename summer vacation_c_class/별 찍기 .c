#include<stdio.h>
int main(void)
{
	int line, star;

	for (line= 5; line >= 1; line--) {
		for (star = 1; star <= line; star++ ) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}