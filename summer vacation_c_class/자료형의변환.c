#include<stdio.h>
int main(void)
{
	//f는 기본 6자리까지 출력
	double change_number = 10;
	printf("%.15f\n", change_number);

	int change_number2 = 5.123;
	printf("%d\n", change_number2);

	//명시적 형변환
	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234);
	printf("%f\n", (double)22);
	printf("%f\n", (float)22);

	unsigned char ch;//0~255(-128~127)
	unsigned short sh;//0~65,500(-32000~32000)
	unsigned int in;//0~42억(-21억~21억)

	ch = 128;
	sh = 50000;
	in = 4100000000;
	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in);

	char num = 255;
	printf("%d", num);
	//값이 넘어가니까 음수로 바뀜

	return 0;
}