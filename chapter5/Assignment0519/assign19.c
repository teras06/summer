/* 파일명: assign19.c

 * 내용: PA19. 영화배우 하정우 씨는 영화 출연료를 전액 고정 출연료로 받을지 기본 출연료와 러닝 개런티로 받을지 고민하고 있다 
               러닝 개런티는 보통 손익분기점 관객 수를 초과하는 경우 관객 1인당 얼마로 계약을 하게 된다 
               기본 출연료, 손익분기점 관객 수, 관객 1인당 러닝 개런티를 입력받아서 예상 출연료를 계산해서 출력하는 프로그램을 작성하라
               예상 관객 수가 백만 명, 2백만 명, ... 15백만 명일 때의 예상 출연료를 구해서 출력하라

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Movie();

int main(void)
{
    Movie();
    return 0;
}

void Movie(void)
{
    int appearance, Break_even_point, guarantee; //기본 출연료, 손익분기점, 개런티

    printf("기본 출연료? ");
    scanf("%d", &appearance);
    printf("손익 분기점 관객 수? ");
    scanf("%d", &Break_even_point);
    printf("관객 1인당 개런티? ");
    scanf("%d", &guarantee);

    int i;

    for (i = 1; i < 16; i++)
    {
        int gallery = i * 1000000;

        if (gallery <= Break_even_point)
        {
            printf("관객  %d명 일 때 예상 출연료:  %d원\n", gallery, appearance);
        }
        else
        {
            printf("관객  %d명 일 때 예상 출연료:  %d원\n", gallery, appearance + (gallery - Break_even_point) * guarantee);
        }
    }
}