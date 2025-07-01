#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Hexa(void);

int main()
{
	Hexa();
	return 0;
}

void Hexa(void)
{
	int num;

	printf("16진수 정수? ");
	scanf("%x", &num);

	printf("16진수 %x는 10진수 %d입니다.", num, num);

	return;
}