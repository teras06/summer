/* ���ϸ�: assign07.c

 * ����: PA07. 3���� fibonacci �Լ��� 5���� power �Լ��� �Լ� �����͸� �̿��ؼ� ȣ���ϴ� ���α׷��� �ۼ��϶� 
               ���� �Լ� ������ ������ �����ϴ� ���� �Լ��� ���� ���������� ������ ���� ������ ������ �����ϴ� ��츦 ��� �ۼ��غ��� 
               ���� ����� 3�� 5���� �����ϴ�

 * �ۼ���: �迵��

 * ��¥: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    /* ���� ������ �Լ� �����ͷ� fibo �Լ� ȣ��

    int (*fibo_ptr)(int) = fibonacci;

    printf("%d ", fibo_ptr(10));
    */

    /* typedef�� �̿��Ͽ� fibo �Լ� ȣ��
    * 
    typedef int (*FiboFunc)(int);
    FiboFunc fibo_typedef_ptr = fibonacci;

    printf("Fibonacci(10) = %d\n\n", fibo_typedef_ptr(10));
    */

    /* ���� ������ �Լ� �����ͷ� power �Լ� ȣ��
    * 
    int (*power_ptr)(int, int) = power;

    printf("power(2, 10) = %d\n\n", power_ptr(2, 10));
    */

    /* typedef�� �̿��Ͽ� power �Լ� ȣ��
    * 
    typedef int (*PowerFunc)(int, int);
    PowerFunc power_typedef_ptr = power;

    printf("power(2, 10) = %d\n\n", power_typedef_ptr(2, 10));
    */

    return 0;
}