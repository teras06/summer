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

	printf("16���� ����? ");
	scanf("%x", &num);

	printf("16���� %x�� 10���� %d�Դϴ�.", num, num);

	return;
}