#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Size(void);

int main()
{
	Size();
	return 0;
}

void Size(void)
{
	char s;

	printf("�� ������(S,M,L)? ");
	scanf("%c", &s);

	printf("%c ����� �����߽��ϴ�.", s);

	return;
}