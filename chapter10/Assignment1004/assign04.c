/* ���ϸ�: assign04.c

 * ����: PA04. �������� ��Ÿ���� DATE ����ü�� DATE ����ü�� �Ű������� ���޹޾� ��¥�� "2019/1/1" ó�� ����ϴ� print_date �Լ��� �����϶�
               DATE ����ü�� print_data �Լ��� �̿��ؼ� �Է¹��� ��¥�� ����ϴ� ���α׷��� �ۼ��϶�

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

void print_date(DATE d);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    DATE time;

    printf("��? ");
    scanf("%d", &time.year);
    printf("��? ");
    scanf("%d", &time.month);
    printf("��? ");
    scanf("%d", &time.day);

    print_date(time);
}


void print_date(DATE d)
{
    printf("%d/%d/%d\n", d.year, d.month, d.day);
}