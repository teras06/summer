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

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
	scanf("%c %d", &size, &number);

	printf("%c ������ %d���� �ֹ��մϴ�.", size, number);

	return;
}