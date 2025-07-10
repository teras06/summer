/* 파일명: assign10.c

 * 내용: PA10. 프로그램을 작성하다 보면 0~(N-1) 범위에 있는 임의의 정수를 생성해야 하는 경우가 자주 있다 
               표준 C 라이브러리의 rand 함수를 이용해서 0에서 (N-1) 사이에 있는 임의의 정수를 리턴하는 random 함수를 정의하라
               함수를 이용해서 범위에 0~99 범위에 있는 임의의 정수 10개를 생성하고 그 합계를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int N);
void Print(void);

int main()
{
    Print();
    return 0;
}

int random(int N)
{
    return rand() % N;
}

void Print(void)
{
    int i, r, sum = 0;

    srand((unsigned int)time(NULL));

    printf("0~99사이의 임의의 정수를 10개 생성해서 합계를 구합니다.\n");

    for (i = 0; i < 10; i++)
    {
        r = random(100);
        printf("  %d", r);
        sum += r;
    }

    printf("\n합계: %d", sum);
}