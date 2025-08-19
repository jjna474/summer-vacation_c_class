#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("숫자 입력:");
	scanf_s("%d", &num);

	if (num < 2) {
		printf("숫자는 최소 2 이상 입력하세요.");//칸 최소 2개 확보
		return 1;
	}



	//int numLength[num];//stack,data 시작할때 메모리 정해짐. heap 그때그때 메모리 할당 ->malloc 사용
	int *numLength =(int*)malloc(num*sizeof(int));//5*4(num에 5입력하면), sizeof랑 포인터 크기 같아야함,인덱스접근가능,메모리릭(메모리누수)
	if (numLength == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}

	numLength[1] = 3;
	printf("%d\n", numLength[1]);

	free(numLength);//메모리 지워줌




	return 0;
}