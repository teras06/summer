/* 파일명: assign02.c

 * 내용: PA02. 정수를 매개변수로 전달해서 정수에 있는 숫자의 합을 구하는 sum_of_digits 함수를 재귀 함수로 정의하라

 * 작성자: 김영재

 * 날짜: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_of_digits(int n);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int x;

    while (1)
    {
        printf("정수? ");
        scanf("%d", &x);

        if (x == 0)
        {
            printf("종료합니다.\n");
            break;
        }

        printf("sum of digits: %d\n", sum_of_digits(x));
    }
}

int sum_of_digits(int n)
{
    if (n < 0)
    {
        n = -n;
    }

    if (n < 10)
    {
        return n;
    }

    return (n % 10) + sum_of_digits(n / 10);
}