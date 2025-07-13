/* 파일명: assign13.c

 * 내용: PA13. 연도와 월을 인자로 전달받아 그 달이 며칠인지 리턴하는 get_days_of_month 함수를 작성하라 12번에서 작성한 is_leap_year 함수를 이용해도 된다 
               함수를 이용해서 입력받은 연도의 1월부터 12월까지의 날짜수를 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.13
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int year);
int get_days_of_month(int year, int month);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int year;

    printf("연도? ");
    scanf("%d", &year);
    printf("[ %d년 ]\n", year);

    year = is_leap_year(year);

    int i;
    for (i = 1; i <= 12; i++)
    {
        int day = get_days_of_month(year, i);

        printf("%2d월: %2d일 ", i, day);

        if (i == 6)
            printf("\n");
    }
}

int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int get_days_of_month(int year, int month)
{
    if (year == 1)
    {
        switch (month)
        {
        case 1:
            return 31;
        case 2:
            return 29;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
        }
    }
    else
    {
        switch (month)
        {
        case 1:
            return 31;
        case 2:
            return 28;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
        }
    }
}