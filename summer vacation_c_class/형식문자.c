#include<stdio.h>
int main(void)
{
	//%d:int,char,short(숫자로 출력)
	//%c:char,short,int(문자로 출력)
	//%f:float 실수
	//%s:char(문자열)
	//%p:포인터 주소값
	//%lld:long long
	//%u:unsigned  int(부호 없는 숫자)
	//%lf:long double , double

	long long x = 2200000000;
	printf("값: %lld\n", x);

	printf("%10d\n", 42);
	printf("%5d\n", 12345);
	printf("%5d\n", 123456);
	printf("%-10d", 123456);
	printf("%d", 1);
	printf("%010d\n", 1234);
	printf("%8.2f\n", 3.1415);//8:칸 개수  2:소수점 자리 수
	printf("%8.3f", 3.1415);

	return 0;
}