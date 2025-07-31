/* ���ϸ�: assign06.c

 * ����: PA06.  DATE ����ü�� 2���� �Ű������� ���޹޾� ��¥�� ������ ���ϴ� is_same_date �Լ��� �����϶�
                DATE ����ü �迭�� �����ؼ� �����Ͽ� �ش��ϴ� ��¥�� �ʱ�ȭ�� ���� �Է¹��� ��¥�� ���������� �˻��ϴ� ���α׷��� �ۼ��϶�
                �Է¹��� ��¥�� "0 0 0"�̸� ���α׷��� �����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.30
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
        printf("��¥ �Է� (������)? ");
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
            printf("%d/%d/%d�� �������Դϴ�.\n", input.year, input.month, input.day);
        }
        else
        {
            printf("%d/%d/%d�� �������� �ƴմϴ�.\n", input.year, input.month, input.day);
        }
    }
}
