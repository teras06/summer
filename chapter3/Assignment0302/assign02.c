#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Oblong(void);

int main()
{
	Oblong();
	return 0;
}

void Oblong(void)
{
	int wid, len;

	printf("������ ����? ");
	scanf("%d", &wid);
	printf("������ ����? ");
	scanf("%d", &len);

	printf("���簢���� ����: %d\n", len * wid);
	printf("���簢���� �ѷ�: %d", len * 2 + wid * 2);

	return;
}