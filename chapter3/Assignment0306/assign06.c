#define _CRT_SECURE_NO_WARNINGS
#define Pyeong 0.3025
#include <stdio.h>

void Apt(void);

int main()
{
	Apt();
	return 0;
}

void Apt(void)
{
	double area, square;

	printf("아파트의 면적(제곱미터) ? ");
	scanf("%lf", &square);

	area = Pyeong * square;

	printf("%.2f 제곱미터 = %.2f 평", square, area);

	return;
}