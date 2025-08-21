/* ���ϸ�: assign04.c

 * ����: PA04. 3�� ���α׷��� ���� ���� ���� ������ ��� �Լ��� �ݺ������� ȣ���ϹǷ� ��ȿ�����̴� 
               �������� 20��ó�� fibonacci(N)�� ���� ��, �� ���� �迭�� ������ �ΰ� ���� ���� fibonacci(N)�� ���ϸ� 
               �迭�� �����ص� ���� �����ϵ��� �Լ��� �����϶�, ���� ����� 3���� �����ϴ�

 * �ۼ���: �迵��

 * ��¥: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#define MAX 50
#include <stdio.h>

int fibonacci(int n);
void Print(void);

int fibo[MAX];

int main()
{
    for (int i = 0; i < MAX; i++) 
    {
        fibo[i] = -1;
    }

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
    if (fibo[n] != -1) 
    {
        return fibo[n];
    }

    if (n == 0 || n == 1) 
    {
        fibo[n] = 1;
    }
    else 
    {
        fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }

    return fibo[n];
}