/* 파일명: assign12.c

 * 내용: PA12. 윤년인지 검사하는 is_leap_year 함수를 작성하라 이 함수를 이용해서 2000년부터 2100년 사이에 있는 윤년을 모두 구해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.13
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int year);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    printf("2000~2100사이의 윤년\n");
    
    int i;
    for (i = 2000; i <= 2101; i++)
    {
        int year = is_leap_year(i);

        if (year != 0)
        {
            printf("%d ", year);
        }
    }
}

int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return year;
    }
    else
    {
        return 0;
    }
}

