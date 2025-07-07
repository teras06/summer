/* 파일명: assign08.c

 * 내용: PA08. 비트 연산을 수행하는 계산기를 프로그램하라
               &는 비트 AND, I는 비트 OR, ^는 비트 XOR 연산을 처리한다 "0xAB & 0xCC"처럼 연산식을 입력해서 연산 결과를 구하라
               비트 연산이므로 연산식을 입력받을 때 10진수, 8진수, 16진수를 사용할 수 있게 하고, 연산의 결과는 16진수로 출력하라

 * 작성자: 김영재

 * 날짜: 2025.07.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BitOperations();

int main(void)
{
    BitOperations();
    return 0;
}

void BitOperations(void)
{
    int x, y;
    char unit;

    printf("비트 연산식? ");
    scanf("%i %c %i", &x, &unit, &y);


    if (unit == '&')
    {
        printf("%x & %x = %x ", x, y, x & y);
    }
    else if (unit == '|')
    {
        printf("%x | %x = %x ", x, y, x | y);
    }
    else if (unit == '^')
    {
        printf("%x ^ %x = %x ", x, y, x ^ y);
    }
    else
    {
        printf("잘못 입력하셨습니다.");
    }
}

/*
switch (unit)
    {
    case '&':
        printf("%x & %x = %x ", x, y, x & y);
        break;
    case '|':
        printf("%x | %x = %x ", x, y, x | y);
        break;
    case '^':
        printf("%x ^ %x = %x ", x, y, x ^ y);
        break;
    }
*/