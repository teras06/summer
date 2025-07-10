/* 파일명: assign16.c

 * 내용: PA16. 정수의 배수를 구해서 출력하는 프로그램을 작성하라 양의 정수를 입력받고 배수를 몇 개나 출력할지 입력받아 
               정수의 배수를 입력받은 개수만큼 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Multiple(void);

int main()
{
    Multiple();
    return 0;
}

void Multiple(void)
{
    int i, integer, unit;

    printf("양의 정수? ");
    scanf("%d", &integer);
    printf("배수의 개수? ");
    scanf("%d", &unit);

    for (int i = 1; i < unit +1; i++)
    {
        printf("%d ", integer * i);
    }
}