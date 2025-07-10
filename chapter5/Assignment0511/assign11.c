/* 파일명: assign11.c

 * 내용: PA11. 32비트 크기의 데이터(부호 없는 정수형)에 대해서 0~31번째 비트 각각 하나만 1인 값을 구해서 16진수와 10진수로 출략하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Bit(void);

int main()
{
    Bit();
    return 0;
}

void Bit(void)
{
    int i;
    unsigned int bit = 1;

    for (i = 0;i < 32;i++)
    {
        printf("%d번 비트만 1인 값: %08x %d\n", i, bit << i, bit << i);
    }
}