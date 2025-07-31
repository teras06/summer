/* ���ϸ�: assign07.c

 * ����: PA07. ��¥���� ���� 1~12������ ���̴� ���� ��Ÿ���� ����ü�� ���� ����� �����ϰ�, �� ����ü�� �̿��ϵ��� DATE ����ü�� ���Ǹ� �����϶� 
               ��¥�� "Jan 1 2019" �������� ����ϴ� print_date_eng �Լ��� �����϶�
               set_as_today �Լ��� print_date_eng �Լ��� �̿��ؼ� ���� ��¥�� ����� ǥ������� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

typedef enum {
    Jan = 1, Feb, Mar, Apr, May, Jun,
    Jul, Aug, Sep, Oct, Nov, Dec
} MONTH; //�ڵ����� 1�� Ŀ��

typedef struct {
    int year;
    MONTH month;
    int day;
} DATE;

void set_as_today(DATE* d); //���� ��¥
void print_date_eng(const DATE* d); //���
const char* get_month_name(MONTH m); //���� ��ȯ
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
    print_date_eng(&today);
}

void set_as_today(DATE* d) 
{
    time_t t = time(NULL);
    struct tm* now = localtime(&t);

    d->year = now->tm_year + 1900;
    d->month = (MONTH)(now->tm_mon + 1);
    d->day = now->tm_mday;
}

void print_date_eng(const DATE* d) 
{
    printf("Todat is %s %d %d\n", get_month_name(d->month), d->day, d->year);
}

const char* get_month_name(MONTH m) 
{
    static const char* month_names[] = 
    {
        "Invalid", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (m < Jan || m > Dec)
    {
        return "Invalid";
    }

    return month_names[m];
}