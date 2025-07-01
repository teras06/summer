#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Date(void);

int main()
{
	Date();
	return 0;
}

void Date(void)
{
	int year, month, day;

	printf("연? ");
	scanf("%d", &year);

	printf("월? ");
	scanf("%d", &month);

	printf("일? ");
	scanf("%d", &day);

	printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);

	return;
}