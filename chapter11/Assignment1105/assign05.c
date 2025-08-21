/* 파일명: assign05.c

 * 내용: PA05. 거듭제곱 n^m을 구하는 power 함수를 재귀함수로 작성하라 power 함수는 밑(base)과 지수(exponent)를 매개변수로 전달받는다 
               밑과 지수는 정수라고 가정한다 n을 입력받아, n^0 ~ n^10을 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int exponent);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int n;
    printf("밑(base)? ");
    scanf("%d", &n);

    int i;
    for (i = 0; i <= 10; i++) 
    {
        printf("%d ^ %d = %d\n", n , i , power(n, i));
    }
}

int power(int base, int exponent)
{
    if (exponent == 0) 
    {
        return 1;
    }
    else 
    {
        return base * power(base, exponent - 1);
    }
}