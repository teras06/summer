/* 파일명: assign03.c

 * 내용: PA03. 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하라
			   질량은 g 단위로 입력받고, 부피는 cm^3 단위로 입력받는다

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Density(void);

int main()
{
	Density();
	return 0;
}

void Density(void) //밀도
{
	int weight, volume;

	printf("질량(g)? ");
	scanf("%d", &weight);
	printf("부피(세제곱센티미터)? ");
	scanf("%d", &volume);

	double density = (double)weight / (double)volume;

	printf("밀도: %06lf", density);
}