/* ���ϸ�: assign03.c

 * ����: PA03. �Ǻ���ġ ������ n��° ���� ���ϴ� fibonacci �Լ��� ����Լ��� �����϶� 
               �Ǻ���ġ ������ �ٷ� �տ� �� ���� ������ ��������, ó�� �� ���� 1�̴� 
               fibonacci �Լ��� �̿��ؼ� 0~19�� ���� ����ϴ� ���α׷��� �ۼ��϶�

               fibonacci(n) = 1 (n = 0, n = 1)
               fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2) (n > 1)

 * �ۼ���: �迵��

 * ��¥: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}