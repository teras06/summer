/* 파일명: assign04.c

 * 내용: PA04. 용매의 질량과 용질의 질량을 정수로 입력받아 용액의 퍼센트 농도를 구하는 프로그램을 작성하라
			   용매의 질량과 용질의 질량은 g 단위로 입력받는다

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

void Density(void) //농도
{
	double menstruum, solute, density; //묭매, 용질, 농도

	printf("용매(g)? ");
	scanf("%lf", &menstruum);
	printf("용질(g)? ");
	scanf("%lf", &solute);

	density = (solute / (menstruum + solute)) * 100;

	printf("농도: %.2lf %%", density);
}