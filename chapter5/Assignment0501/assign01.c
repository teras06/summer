/* 파일명: assign01.c

 * 내용: PA01. 점의 좌표를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하라
			   스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Point(void);

int main(void)
{
	Point();
	return 0;
}

void Point(void)
{
	int left, up, right, down;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &up);
	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &down);

	int x, y;

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= up && y <= down)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
	}
	else if (x <= left && x >= right && y <= up && y >= down)
	{
		printf("선택 영역 밖의 점입니다.\n");
	}
	else
	{
		printf("입력값이 올바르지 않습니다.\n");
	}
}