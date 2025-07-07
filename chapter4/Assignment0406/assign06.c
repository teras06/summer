/* 파일명: assign06.c

 * 내용: PA06. 점 A의 좌표(x1, y1)과 점 B의 좌표(x2, y2)를 입력받아 두 점 A, B를 지나는 직선의 기울기를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Inclination(void);

int main()
{
	Inclination();
	return 0;
}

void Inclination(void) //기울기
{
	double inclination, x1, x2, y1, y2;

	printf("한 점의 좌표 (x1, y1)? ");
	scanf("%lf %lf", &x1, &y1);
	printf("또 다른 점의 좌표 (x2, y2)? ");
	scanf("%lf %lf", &x2, &y2);

	inclination = (y2 - y1) / (x2 - x1);

	printf("직선의 기울기: %.6lf", inclination);
}