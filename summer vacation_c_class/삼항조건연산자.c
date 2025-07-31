#include<stdio.h>
main(void)
{
	//조건식?맞으면 이게 출력됩니다.(true):틀리면 이게 출력됩니다.(false)
	int ten = 10, twenty = 20;
	int max;

	max = ten > twenty ? ten : twenty;
	printf("더 큰 값은:%d\n", max);

	int x,y;
	
	scanf_s("%d", &x);
	y = x /= 2;
	y = 0 ? 1 : 0;
	printf("입력한 숫자는 %d이며 결과:%d\n", x, y);

	int user_age, check);
	printf("나이를 입력하세요:");
	scanf_s("%d", &user_age);

	check = user_age >= 20 ? 1280 : 800;
	printf("%d세의 지하철 요금은 %d입니다", user_age);

	int like_num, result;
	printf("좋아하는 숫자를 입력하세요:");
	scanf_s("%d", &like_num);
	//like_num을 2로 나눈 값이 0이라면 짝수이다.

	result = (like_num % 2) == 0 ? 0 : 1;
	printf("입력한 숫자는 %d이며 결과는:%d이다", like_num, result);



	return 0;
}