/* 파일명: assign13.c

 * 내용: PA13. 비트 OR 연산자를 이용하면 두 이미지를 합칠 수 있다 크기가 같은 2개의 unsigned char 배열을 비트 OR 연산한 결과를 출력하는 프로그램을 작성하라.
               unsigned char 배열 2개는 크기가 16인 배열로 선언하고 임의의 데이터(0~255)를 채우고, 비트 OR 연산 결과를 저장할 배열을 따로 선언해서 사용하라


 * 작성자: 김영재

 * 날짜: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    unsigned char arr1[16];
    unsigned char arr2[16];
    unsigned char arr3[16];

    srand((unsigned int)time(0));

    int i;
    for (i = 0; i < 16; i++) 
    {
        arr1[i] = rand() % 256;
        arr2[i] = rand() % 256;
        arr3[i] = arr1[i] | arr2[i];
    }

    printf("image1:");
    for (i = 0; i < 16; i++) 
    {
        printf(" %02X", arr1[i]);
    }

    printf("\nimage2:");
    for (i = 0; i < 16; i++) 
    {
        printf(" %02X", arr2[i]);
    }

    printf("\nimage3:");
    for (i = 0; i < 16; i++) 
    {
        printf(" %02X", arr3[i]);
    }
}