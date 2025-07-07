/* 파일명: assign02.c

 * 내용: PA02. 화씨 온도(°F)를 입력받아 섭씨 온도(°C)로 변환해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Tem(void);

int main(void)
{
	Tem();
	return 0;
}

void Tem(void)
{
	double Ftem, Ctem;

	printf("화씨온도? ");
	scanf("%lf", &Ftem);

	Ctem = (Ftem - 32) * (5.0 / 9.0);

	printf("%.2lf F = %.2lf C", Ftem, Ctem);
}