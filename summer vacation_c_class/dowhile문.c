#include<stdio.h>
 main(void)
{
	int do_while = 1;
	do {
		printf("do while문 %d번 실습중!\n",do_while);
		do_while++;
	} while (do_while <= 10);

	return 0;
}