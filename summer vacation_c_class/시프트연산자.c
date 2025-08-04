#include<stdio.h>
int main(void)
{
	// <<왼쪽시프트연산자(*2^옮기고싶은 값)
	//>>오른쪽시프트연산자(부호비트는 원래값 따라감, /2^옮기고 싶은 값)

	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2;
	int shift_right = num2 >> 2;

	printf("%d<<2=%d\n",num1, shift_left);
	printf("%d>>2=%d", num2, shift_right);



	return 0;
}