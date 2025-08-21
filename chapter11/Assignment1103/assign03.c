/* 파일명: assign03.c

 * 내용: PA03. 피보나치 수열의 n번째 항을 구하는 fibonacci 함수를 재귀함수로 정의하라 
               피보나치 수열은 바로 앞에 두 수의 합으로 구해지며, 처음 두 항은 1이다 
               fibonacci 함수를 이용해서 0~19번 항을 출력하는 프로그램을 작성하라

               fibonacci(n) = 1 (n = 0, n = 1)
               fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2) (n > 1)

 * 작성자: 김영재

 * 날짜: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}