#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Square(void);

int main()
{
	Square();
	return 0;
}

void Square(void)
{
	int len;

	printf("�� ���� ����? ");
	scanf("%d", &len);

	printf("���簢���� ����: %d\n", len * len);
	printf("���簢���� �ѷ�: %d", len * 4);

	return;
}