/* 파일명: assign05.c

 * 내용: PA05. DATE 구조체를 매개변수로 전달받아 날짜를 오늘 날짜로 지정하는 set_as_today 함수를 정의하라
               시스템을로부터 현재 날짜와 시간을 구할 때는 <time.h>의 time 함수와 localtime 함수를 이용한다
               DATE 구조체와 set_as_today, print_date 함수를 이용해서 오늘 날짜를 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

typedef struct date {
    int year;
    int month;
    int day;
} DATE;

void set_as_today(DATE* d);
void print_date(DATE d);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    DATE today;

    set_as_today(&today);
    print_date(today);
}

void set_as_today(DATE* d)
{
    time_t now = time(NULL);             // 현재 시간 얻기
    struct tm* t = localtime(&now);      // 로컬 시간 구조체로 변환

    d->year = t->tm_year + 1900;         // tm_year: 연도에서 1900을 뺀 값
    d->month = t->tm_mon + 1;            // tm_mon: 0~11 사이의 값
    d->day = t->tm_mday;                 // tm_mday: 1~31 사이의 값
}

void print_date(DATE d)
{
    printf("오늘 날짜는 %d/%d/%d 입니다.", d.year, d.month, d.day);
}