#include<stdio.h>
int main(void)
{
	char good[] = "good";//값 변경 가능
	char* bad = "bad";//첫번재 h의 주소가 bad에 저장, 주소 변경 가능

	good[0] = 'H';//복제된 내용 수정 가능
	//good = "new good";주소를 변경하려는 행위

	//bad[0] = 's';
	bad = "new bad";
	printf("%s %s", good, bad);
	return 0;
}