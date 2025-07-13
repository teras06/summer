/* ���ϸ�: assign12.c

 * ����: PA12. �������� �˻��ϴ� is_leap_year �Լ��� �ۼ��϶� �� �Լ��� �̿��ؼ� 2000����� 2100�� ���̿� �ִ� ������ ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.13
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
    printf("2000~2100������ ����\n");
    
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

