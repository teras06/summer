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
	double num;

	printf("�Ǽ�? ");
	scanf("%lf", &num);

	printf("����: %e\n", num * num);
	printf("������: %e", num * num * num);

	return;
}