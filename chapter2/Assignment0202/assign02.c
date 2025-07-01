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

	printf("번호? ");
	scanf("%d", &num);

	printf("학점? ");
	scanf("%lf", &score);

	printf("%d번 학생의 학점은 %.6f입니다", num, score);

	return;
}