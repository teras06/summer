/* 파일명: assign02.c

 * 내용: PA02. 이차원 평면에 있는 점의 좌표 (x,y)를 입력받아 어느 사분면의 점인지 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Quadrant(void);

int main(void)
{
	Quadrant();
	return 0;
}

void Quadrant(void)
{
	int x, y;

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1사분면에 있습니다.");
	}
	else if (x < 0 && y > 0)
	{
		printf("2사분면에 있습니다.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3사분면에 있습니다.");
	}
	else if (x > 0 && y < 0)
	{
		printf("4사분면에 있습니다.");
	}
	else if (x == 0 && y == 0)
	{
		printf("원점에 있습니다.");
	}
	else
	{
		printf("좌표축에 있습니다.");
	}
}