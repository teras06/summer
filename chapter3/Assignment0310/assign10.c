#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void USD(void);

int main()
{
	USD();
	return 0;
}

void USD(void)
{
	double usd, rate;

	printf("USD? ");
	scanf("%lf", &usd);
	printf("��/�޷� ȯ��? ");
	scanf("%lf", &rate);

	printf("USD %.2f = KRW %.2f", usd, usd * rate);

	return;
}