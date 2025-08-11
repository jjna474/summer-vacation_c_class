#include<stdio.h>
int main(void)
{
	//배열의 이름:변수와 동일
	//배열의 담을 자료형 필요
	//배열의 길이:배열에 포함된 데이터의 개수

	int numbers[5] = { 10,20,30,40,50 };//[인덱스]0부터, 초기화리스트 , 선언과 같이 초기화
	//int numbers[] = {1,2,3};
	numbers[0] = 100;
	int max;
	max = numbers[0];
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
			
		}
		
	}
	
	printf("%d", max);
	return 0;
}