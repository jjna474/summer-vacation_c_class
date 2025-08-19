#include<stdio.h>

#define SIZE 50

struct Book {
	char title[SIZE];
	char author[SIZE];
	int price;
};

int main(void)
{
	struct Book books[3] = { 0 };//선언과 동시에 초기화
	int maxindex = 0;

	for (int i = 0; i < 3; i++) {
		printf("%d번째 책 제목 : ", i + 1);
		scanf_s("%s", books[i].title, (unsigned)sizeof(books[i].title));

		printf("%d번째 책 저자 : ", i + 1);
		scanf_s("%s", books[i].author, (unsigned)sizeof(books[i].author));

		printf("%d번째 책 가격 : ", i + 1);
		scanf_s("%d", &books[i].price);
	}

	for (int i = 1; i < 3; i++) {
		if (books[i].price > books[maxindex].price) {
			maxindex = i;
		}
	}

	printf("가장 비싼 책 정보\n");
	printf("제목: %s\n", books[maxindex].title);
	printf("저자: %s\n", books[maxindex].author);
	printf("가격: %d원\n", books[maxindex].price);

	return 0;
}