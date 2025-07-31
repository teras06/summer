/* 파일명: assign11.c

 * 내용: PA11. 직사각형의 넓이와 둘레를 구하는 get_rect_info 함수를 작성하라 직사각형의 가로, 세로의 길이를 입력받은 다음 
               get_rect_info 함수를 이용해서 직사각형의 넓이와 둘레를 구해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.22
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void get_rect_info(int width, int length, int* area, int* perimeter);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int width, length;
	int area, perimeter;

	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &length);

	get_rect_info(width, length, &area, &perimeter);

	printf("넓이: %d, 둘레: %d", area, perimeter);
}

void get_rect_info(int width, int length, int* area, int* perimeter)
{
	*area = width * length;
	*perimeter = 2 * (width + length);
}
