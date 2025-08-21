/* ���ϸ�: assign01.c

 * ����: PA01. ������ �Ű������� �����ؼ� ������ �ִ� ������ ������ ���ϴ� count_digits �Լ��� ���� �Լ��� �����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_digits(int n);
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
            break;
        }

        printf("count of digits: %d\n", count_digits(x));
    }
}

int count_digits(int n)
{
    if (n < 0)
    {
        n = -n;
    }

    if (n < 10)
    {
        return 1;
    }

    return 1 + count_digits(n / 10);
}

