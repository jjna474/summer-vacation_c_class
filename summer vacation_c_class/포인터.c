#include<stdio.h>
int main(void)
{
	int x = 10;
	printf("%p\n", &x);
	//x에 주소를 p에 저장하겠다.
	//int:정수를 저장하는 4바이트 변수
	//&를 사용하면 주소에 접근할 수 있다.

	int *p = &x;//int는 정수 담는 거니까 *를 사용하면 주소를 저장할 수 있게 된다.
	printf("%p\n", p);//x의 시작주소
	printf("%d\n", *p);//역참조
	//*p:역참조(주소 안에 있는 데이터 값에 접근하는 것)
	//p는 주소 *p는 값에 접근


	double d = 3.14;
	double* ptr = &d; //시작 주소를 가지고 있다. *=처음 시작 주소

	printf("%p\n", ptr);
	printf("%.2f\n", *ptr);
	



	return 0;
}