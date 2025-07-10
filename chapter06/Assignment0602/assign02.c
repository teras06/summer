/* 파일명: assign02.c

 * 내용: PA02. 한 변의 길이를 매개변수로 전달받아 정사각형의 넓이를 구하는 get_area_of_square 함수를 작성하라
               get_area_of_square 함수를 이용해서 입력받은 한 변의 길이로 정사각형의 넓이를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
double get_area_of_square(double x);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	double x;

	printf("한 변의 길이? ");
	scanf("%lf", &x);

	printf("정사각형의 면적: %f", get_area_of_square(x));
}

double get_area_of_square(double x)
{
	return x * x;
}