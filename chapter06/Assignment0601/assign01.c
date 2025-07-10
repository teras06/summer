/* 파일명: assign01.c

 * 내용: PA01. 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하라
			   get_perimeter 함수를 이용해서 입력받은 한 변의 길이로 정사각형의 넓이를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int get_perimeter(int x, int y);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int x, y;

	printf("가로? ");
	scanf("%d", &x);
	printf("세로? ");
	scanf("%d", &y);

	printf("직사각형의 둘레: %d", get_perimeter(x, y));
}

int get_perimeter(int x, int y)
{
	return (x + y) * 2;
}