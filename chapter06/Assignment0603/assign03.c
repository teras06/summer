/* 파일명: assign03.c

 * 내용: PA03. 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하라
			   distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Print(void);
double distancee(int a, int b, int c, int d);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int x1, x2, y1, y2;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	double length = distancee(x1, x2, y1, y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %f", x1, y1, x2, y2, length);
}

double distancee(int a, int b, int c, int d)
{
	int x = pow(a - b, 2);
	int y = pow(c - d, 2);

	double z = sqrt(x + y);

	return z;
}