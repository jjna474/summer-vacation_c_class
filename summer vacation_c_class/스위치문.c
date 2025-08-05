#include<stdio.h>
int main(void)
{
	int day;
	printf("요일을 선택하세요(1~7 중 택 1):");
	scanf_s("%d", &day);

	switch (day) {
	case 1:printf("월요일입니다.\n");
		break;
	case 2:printf("화요일입니다.\n");
		break;
	case 3:printf("수요일입니다.\n");
		break;
	case 4:printf("목요일입니다.\n");
		break;
	case 5:printf("금요일입니다.\n");
		break;
	case 6:printf("토요일입니다.\n");
		break;
	case 7:printf("일요일입니다.\n");
		break;

	default:printf("존재하지 않는 입력입니다.");
	}
	return 0;
}