#include<stdio.h>

#define SIZE 50

struct Book {
	char title[SIZE];
	char author[SIZE];
	int price;
};

int main(void)
{
	struct Book books[3] = { 0 };//����� ���ÿ� �ʱ�ȭ
	int maxindex = 0;

	for (int i = 0; i < 3; i++) {
		printf("%d��° å ���� : ", i + 1);
		scanf_s("%s", books[i].title, (unsigned)sizeof(books[i].title));

		printf("%d��° å ���� : ", i + 1);
		scanf_s("%s", books[i].author, (unsigned)sizeof(books[i].author));

		printf("%d��° å ���� : ", i + 1);
		scanf_s("%d", &books[i].price);
	}

	for (int i = 1; i < 3; i++) {
		if (books[i].price > books[maxindex].price) {
			maxindex = i;
		}
	}

	printf("���� ��� å ����\n");
	printf("����: %s\n", books[maxindex].title);
	printf("����: %s\n", books[maxindex].author);
	printf("����: %d��\n", books[maxindex].price);

	return 0;
}