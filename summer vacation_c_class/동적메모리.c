#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);

	if (num < 2) {
		printf("���ڴ� �ּ� 2 �̻� �Է��ϼ���.");//ĭ �ּ� 2�� Ȯ��
		return 1;
	}



	//int numLength[num];//stack,data �����Ҷ� �޸� ������. heap �׶��׶� �޸� �Ҵ� ->malloc ���
	int *numLength =(int*)malloc(num*sizeof(int));//5*4(num�� 5�Է��ϸ�), sizeof�� ������ ũ�� ���ƾ���,�ε������ٰ���,�޸𸮸�(�޸𸮴���)
	if (numLength == NULL) {
		printf("�޸� �Ҵ� ����\n");
		return 1;
	}

	numLength[1] = 3;
	printf("%d\n", numLength[1]);

	free(numLength);//�޸� ������




	return 0;
}