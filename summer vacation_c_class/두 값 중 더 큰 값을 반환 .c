#include<stdio.h>

int max(int price1, int  price2) {
	if (price1 > price2) {
		return price1;
	}
	else { 
		return price2;
	}
}


int main(void)
{
	int price1, price2;

	printf("딸기의 가격을 입력하세요 :");
	scanf_s("%d", &price1);
	printf("포도의 가격을 입력하세요 :");
	scanf_s("%d", &price2);

	int expensive = max(price1, price2);
	printf("더 비싼 과일의 가격:%d원", expensive);
	return 0;
}