#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Weight(void);

int main()
{
	Weight();
	return 0;
}

void Weight(void)
{
	double weight;

	printf("������? ");
	scanf("%lf", &weight);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", weight);

	return;
}