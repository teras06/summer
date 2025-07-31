/* 파일명: assign06.c

 * 내용: PA06.  DATE 구조체를 2개를 매개변수로 전달받아 날짜가 같은지 비교하는 is_same_date 함수를 정의하라
                DATE 구조체 배열을 선언해서 공휴일에 해당하는 날짜로 초기화한 다음 입력받은 날짜가 공휴일인지 검사하는 프로그램을 작성하라
                입력받은 날짜가 "0 0 0"이면 프로그램을 종료한다

 * 작성자: 김영재

 * 날짜: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct date {
    int year;
    int month;
    int day;
} DATE;

int is_same_date(DATE d1, DATE d2);
void print_date(DATE d);
void Print(void);

int main()
{
    Print();
    return 0;
}

int is_same_date(DATE d1, DATE d2)
{
    return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}

void print_date(DATE d)
{
    printf("%d/%d/%d\n", d.year, d.month, d.day);
}

void Print(void)
{
    DATE holidays[] = {
        { 2025,  1,  1 }, { 2025,  1, 28 },
        { 2025,  1, 29 }, { 2025,  1 ,30 },
        { 2025,  3,  1 }, { 2025,  3,  3 },
        { 2025,  4, 15 }, { 2025,  4, 30 },
        { 2025,  5,  5 }, { 2025,  6,  6 },
        { 2025,  8, 15 }, { 2025, 10,  3 },
        { 2025, 10,  6 }, { 2025, 10,  7 },
        { 2025, 10,  8 }, { 2025, 10,  9 },
        { 2025, 12, 25 }
    };

    const int holiday_count = sizeof(holidays) / sizeof(holidays[0]);
    DATE input;

    while (1)
    {
        printf("날짜 입력 (연월일)? ");
        scanf("%d %d %d", &input.year, &input.month, &input.day);

        if (input.year == 0 && input.month == 0 && input.day == 0)
        {
            break;
        }

        int is_holiday = 0;
        for (int i = 0; i < holiday_count; i++)
        {
            if (is_same_date(input, holidays[i]))
            {
                is_holiday = 1;
                break;
            }
        }

        if (is_holiday)
        {
            printf("%d/%d/%d은 공휴일입니다.\n", input.year, input.month, input.day);
        }
        else
        {
            printf("%d/%d/%d은 공휴일이 아닙니다.\n", input.year, input.month, input.day);
        }
    }
}
