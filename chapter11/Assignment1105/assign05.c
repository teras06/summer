/* ���ϸ�: assign05.c

 * ����: PA05. �ŵ����� n^m�� ���ϴ� power �Լ��� ����Լ��� �ۼ��϶� power �Լ��� ��(base)�� ����(exponent)�� �Ű������� ���޹޴´� 
               �ذ� ������ ������� �����Ѵ� n�� �Է¹޾�, n^0 ~ n^10�� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int exponent);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int n;
    printf("��(base)? ");
    scanf("%d", &n);

    int i;
    for (i = 0; i <= 10; i++) 
    {
        printf("%d ^ %d = %d\n", n , i , power(n, i));
    }
}

int power(int base, int exponent)
{
    if (exponent == 0) 
    {
        return 1;
    }
    else 
    {
        return base * power(base, exponent - 1);
    }
}