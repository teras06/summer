/* 파일명: assign09.c

 * 내용: PA09. red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하라
			   앞에서 정의한 get_red, get_green, get_blue 함수를 함깨 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int color);
int get_green(unsigned int color);
int get_blue(unsigned int color);
int make_rgb(int r, int g, int b);
void Print(void);


int main()
{
	Print();
	return 0;
}

void Print()
{
	unsigned int x;

	printf("RGB 색상? ");
	scanf("%x", &x);

	printf("RGB %06x의 보색: %06X", x, make_rgb(get_red(x), get_green(x), get_blue(x)));
}

int get_red(unsigned int color)
{
	return (color >> 16) & 0xFF;
}

int get_green(unsigned int color)
{
	return (color >> 8) & 0xFF;
}

int get_blue(unsigned int color)
{
	return color & 0xFF;
}

int make_rgb(int r, int g, int b)
{
	unsigned int rgb = (r << 16) + (g << 8) + b;
	return ~rgb & 0xFFFFFF;
}