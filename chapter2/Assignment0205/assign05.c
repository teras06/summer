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

	printf("몸무게? ");
	scanf("%lf", &weight);

	printf("입력한 몸무게는 %.2fKG입니다.", weight);

	return;
}