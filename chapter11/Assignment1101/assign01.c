/* 파일명: assign01.c

 * 내용: PA01. 정수를 매개변수로 전달해서 정수에 있는 숫자의 개수를 구하는 count_digits 함수를 제귀 함수로 정의하라

 * 작성자: 김영재

 * 날짜: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_digits(int n);
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
            break;
        }

        printf("count of digits: %d\n", count_digits(x));
    }
}

int count_digits(int n)
{
    if (n < 0)
    {
        n = -n;
    }

    if (n < 10)
    {
        return 1;
    }

    return 1 + count_digits(n / 10);
}

