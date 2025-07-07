/* 파일명: assign13.c

 * 내용: PA13. 직선의 시작점의 좌표(x1, y1)과 끝점의 좌표(x2, y2)를 립력받아 두 점을 연결하는 직선의 길이를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void StraightLine(void);

int main()
{
	StraightLine();
	return 0;
}

void StraightLine(void)
{
	double x1, x2, y1, y2;

	printf("직선의 시작점 (x1, y1)? ");
	scanf("%lf %lf", &x1, &y1);
	printf("직선의 끝점 (x2, y2)? ");
	scanf("%lf %lf", &x2, &y2);

	double length = sqrt(((x1-x2) * (x1-x2)) + ((y1-y2) * (y1-y2)));

	printf("직선의 길이: %.06f", length);
}