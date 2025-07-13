/* ���ϸ�: assign14.c

 * ����: PA14. ��, ��, ���� ���ڷ� ���޹޾� ��ȿ�� ��¥���� �˻��ϴ� check_date �Լ��� �ۼ��϶� ���ڷ� �Ѱܹ��� ��¥�� ��ȿ�� ��¥�� 1��, �ƴϸ� 0�� �����Ѵ� 
         12, 13������ �ۼ��� is_leap_year �Լ��� get_days_of_month �Լ��� �̿��ص� ���� check_date �Լ��� �̿��ؼ� ��¥�� �Է��ϴ� ���α׷��� �ۼ��϶� 
         ����ڰ� �߸��� ��¥�� �Է��ϸ� ��ȿ�� ��¥�� �Է��� ������ ����ؼ� �ٽ� �Է¹޵��� ó���Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.13
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
        printf("��¥ (�� �� ��)? ");
        scanf("%d %d %d", &year, &month, &day); 
    
        if (check_date(year, month, day))
        {
            printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", year, month, day);
            break;
        }
        else
        {
            printf("�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.\n");
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