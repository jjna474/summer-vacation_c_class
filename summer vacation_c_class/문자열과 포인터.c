#include<stdio.h>
int main(void)
{
	char good[] = "good";//�� ���� ����
	char* bad = "bad";//ù���� h�� �ּҰ� bad�� ����, �ּ� ���� ����

	good[0] = 'H';//������ ���� ���� ����
	//good = "new good";�ּҸ� �����Ϸ��� ����

	//bad[0] = 's';
	bad = "new bad";
	printf("%s %s", good, bad);
	return 0;
}