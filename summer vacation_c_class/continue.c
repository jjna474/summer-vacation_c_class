#include<stdio.h>
int main(void)
{
	//continue의 역할
	//반복문의 현재 반복을 중단하고 바로 다음 반복으로 넘어간다.
	//continue뒤에 오는 코드는 실행되지 않는다.

	int continueNum;
	for (continueNum = 0; continueNum <= 10; continueNum++) {
		if (continueNum % 2 == 0) {
			continue;//continuenum이 증가하다가 짝수가 되었다면 아래 코드를 무시하고 다음 반복으로 넘어간다.
		}
		printf("%d\n", continueNum);
	}


	int whileConNum=0;
	while (whileConNum <= 10) {
		whileConNum++;
		if (whileConNum % 2 !=0) {//홀수는 !=으로 작성
			continue;
		}
		printf("%d\n", whileConNum);
	}
	return 0;
}