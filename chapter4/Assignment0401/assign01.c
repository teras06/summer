/* 파일명: assign01.c

 * 내용: PA01. 질량과 속력을 입력받아 운동 에너지를 구하는 프로그램을 작성하라
			   질량은 kg 단위, 속력은 m/s 단위로 입력받는다

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double KineticEnergy(double weight, double speed);
void Print(void);

int main(void)
{
	Print();
	return 0;
}

void Print(void)
{
	double weight, speed;

	printf("질량(kg)? ");
	scanf("%lf", &weight);
	printf("속력(m/s)? ");
	scanf("%lf", &speed);

	double result = KineticEnergy(weight, speed);

	printf("운동에너지: %.2f J", result);
}


double KineticEnergy(double weight, double speed)
{
	double result = 1.0 / 2.0 * weight * speed * speed;

	return result;
}