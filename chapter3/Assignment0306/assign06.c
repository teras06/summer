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

	printf("����Ʈ�� ����(��������) ? ");
	scanf("%lf", &square);

	area = Pyeong * square;

	printf("%.2f �������� = %.2f ��", square, area);

	return;
}