#include<stdio.h>
int main(void)
{

	for (int i = 0; i <= 10; i++) {//i는 10까지 늘어난다.
		if (i == 6) {//i가 늘어나다가 6과 같아졌다면
			break;//즉시 브레이크
		}
		printf("%d\n", i);
	}
	printf("\n");

	int i = 0;
	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
		i++;
	}

	return 0;
}