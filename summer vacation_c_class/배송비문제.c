#include<stdio.h>
int main(void)
{
	int totalPrice, member;
	printf("구매금액을 입력하세요:");
	scanf_s("%d", &totalPrice);

	printf("회원인지 확인하세요(회원:1 /비회원:0) :");
	scanf_s("%d", &member);

	if (totalPrice>=100000) {
		printf("100,000원 이상 구매로 사은품이 증정됩니다.");
		if(member==1){
			printf("50,000원 이상 구매 회원은 배송비도 무료입니다.");
		}
		else {
			printf("비회원 배송비 5,000원 부과됩니다.");

		}
	}
	else if(totalPrice>=50000){
		if (member == 1) {
			printf("회원 50000이상 구매 고객은 배송비 무료입니다.");
		}
		else {
			printf("비회원은 배송비 5000원 부과됩니다.");
		}
	}
	else {
		printf("구매급액이 50,000미만입니다. 배송비는 5000원 부과됩니다.");
	}


	return 0;
}