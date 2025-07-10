/* 파일명: assign08.c

 * 내용: PA08. RGB 색상으로부터 red, green, blue 값을 각각 추출하는 get_red, get_green, get_blue 함수를 정의하라
			   이 함수들을 이용해서 입력받은 RGB 색상의 red, green, blue 값을 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int color);
int get_green(unsigned int color);
int get_blue(unsigned int color);
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

    printf("RGB %06X의 red: %d , green: %d , blue: %d", x, get_red(x), get_green(x), get_blue(x));
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