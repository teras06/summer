#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void KRW(void);

int main()
{
	KRW();
	return 0;
}

void KRW(void)
{
	int kor;
	double rate;

	printf("KRW? ");
	scanf("%d", &kor);
	printf("원/달러 환율? ");
	scanf("%lf", &rate);

	printf("KRW %d = USD %.2f", kor, kor / rate);

	return;
}