#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Score(void);

int main()
{
	Score();
	return 0;
}

void Score(void)
{
	int num;
	double score;

	printf("��ȣ? ");
	scanf("%d", &num);

	printf("����? ");
	scanf("%lf", &score);

	printf("%d�� �л��� ������ %.6f�Դϴ�", num, score);

	return;
}