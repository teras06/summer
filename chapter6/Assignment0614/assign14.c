/* 파일명: assign14.c

 * 내용: PA14. 연, 월, 일을 인자로 전달받아 유효한 날짜인지 검사하는 check_date 함수를 작성하라 인자로 넘겨받은 날짜가 유효한 날짜면 1을, 아니면 0을 리턴한다 
         12, 13번에서 작성한 is_leap_year 함수와 get_days_of_month 함수를 이용해도 좋다 check_date 함수를 이용해서 날짜를 입력하는 프로그램을 작성하라 
         사용자가 잘못된 날짜를 입력하면 유효한 날짜를 입력할 때까지 계속해서 다시 입력받도록 처리한다

 * 작성자: 김영재

 * 날짜: 2025.07.13
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int year);
int get_days_of_month(int year, int month);
int check_date(int year, int month, int day);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int year, month, day;

    while (1)
    {
        printf("날짜 (연 월 일)? ");
        scanf("%d %d %d", &year, &month, &day); 
    
        if (check_date(year, month, day))
        {
            printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);
            break;
        }
        else
        {
            printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
        }
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
    if (is_leap_year(year) == 1)
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
        default:
            return 0;
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
        default:
            return 0;
        }
    }
}

int check_date(int year, int month, int day)
{
    int day_of_month = get_days_of_month(year, month);

    if (day_of_month == 0)
    {
        return 0;
    }
    if (day > day_of_month || day < 1)
    {
        return 0;
    }

    return 1;
}