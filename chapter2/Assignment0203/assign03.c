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

	printf("��? ");
	scanf("%d", &year);

	printf("��? ");
	scanf("%d", &month);

	printf("��? ");
	scanf("%d", &day);

	printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", year, month, day);

	return;
}