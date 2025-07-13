/* ���ϸ�: assign18.c

 * ����: PA18. ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��϶�
               0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int a);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int i, r;

    srand(time(NULL));

    for (i = 0; i <= 2; i++)
    {
        r = rand() % 1000;
        printf("%d�� ���: ", r);
        divisors(r);
    }
}

void divisors(int a)
{
    int i;
    int num = 0;

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
            num++;
        }
    }

    printf("=> �� %d��\n", num);
}