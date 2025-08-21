/* ���ϸ�: assign02.c

 * ����: PA02. ������ �Ű������� �����ؼ� ������ �ִ� ������ ���� ���ϴ� sum_of_digits �Լ��� ��� �Լ��� �����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_of_digits(int n);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int x;

    while (1)
    {
        printf("����? ");
        scanf("%d", &x);

        if (x == 0)
        {
            printf("�����մϴ�.\n");
            break;
        }

        printf("sum of digits: %d\n", sum_of_digits(x));
    }
}

int sum_of_digits(int n)
{
    if (n < 0)
    {
        n = -n;
    }

    if (n < 10)
    {
        return n;
    }

    return (n % 10) + sum_of_digits(n / 10);
}