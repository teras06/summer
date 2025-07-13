/* ���ϸ�: assign11.c

 * ����: PA11. �����ڿ� 2 ���� �ǿ����ڸ� ���ڷ� �޾ư��� ��Ģ������ �����ϴ� calculator �Լ��� �ۼ��϶� �̶� �����ڴ� ���ڷ� �޾ƿ��� �ǿ����ڴ� �Ǽ��� �޾ƿ´� 
               �� �Լ��� �̿��ؼ� "0 0 0"�� �Էµ� ������ ��Ģ������ ����� ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.13
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calculator(double a, char b, double c);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double a, c;
    char b;

    while (1)
    {
        printf("���� (0 0 0 �Է� �� ����)? ");
        scanf("%lf %c %lf", &a, &b, &c);

        if (a == 0 && b == '0' && c == 0)
        {
            break;
        }

        double result = calculator(a, b, c);


        printf("%lf\n", result);
    }
}


double calculator(double a, char b, double c)
{
    switch (b)
    {
    case '+':
        return a + c;
    case '-':
        return a - c;
    case '*':
        return a * c;
    case '/':
        return a / c;
    default:
        printf("�߸��� �������Դϴ�.\n");
        return 0;
    }
}