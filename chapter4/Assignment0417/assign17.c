/* 파일명: assign17.c

 * 내용: PA17. 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다 
               7번째 비트만 1인 값, 15번 비트만 1인 값, 31번 째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
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
    unsigned int bit, bit7, bit15, bit23, bit31;

    bit = 1;

    bit7 = bit << 7;
    bit15 = bit << 15;
    bit23 = bit << 23;
    bit31 = bit << 31;

    printf("7번 비트만 1인 값: %08x %d\n", bit7, bit7);
    printf("15번 비트만 1인 값: %08x %d\n", bit15, bit15);
    printf("23번 비트만 1인 값: %08x %d\n", bit23, bit23);
    printf("31번 비트만 1인 값: %08x %d\n", bit31, bit31);
}