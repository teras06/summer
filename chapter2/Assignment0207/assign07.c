#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Coffee(void);

int main()
{
	Coffee();
	return 0;
}

void Coffee(void)
{
	char size;
	int number;

	printf("커피 사이즈(S,T,G)와 주문 수량? ");
	scanf("%c %d", &size, &number);

	printf("%c 사이즈 %d잔을 주문합니다.", size, number);

	return;
}