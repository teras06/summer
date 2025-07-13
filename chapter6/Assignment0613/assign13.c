/* ���ϸ�: assign13.c

 * ����: PA13. ������ ���� ���ڷ� ���޹޾� �� ���� ��ĥ���� �����ϴ� get_days_of_month �Լ��� �ۼ��϶� 12������ �ۼ��� is_leap_year �Լ��� �̿��ص� �ȴ� 
               �Լ��� �̿��ؼ� �Է¹��� ������ 1������ 12�������� ��¥���� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.13
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

    printf("����? ");
    scanf("%d", &year);
    printf("[ %d�� ]\n", year);

    year = is_leap_year(year);

    int i;
    for (i = 1; i <= 12; i++)
    {
        int day = get_days_of_month(year, i);

        printf("%2d��: %2d�� ", i, day);

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