/* ���ϸ�: assign10.c

 * ����: PA10. �ڵ��� ��� ��꼭�� ���� "10�� �̸� ����" ���� ǥ���� �� �� �ִ�, ���� ��� ����� 12345���̸� ���� û������ 12340���� �Ǵ� ���̴�
               �ݾװ� ��������� �Է¹޾� ���� ����� ó���ϴ� ���α׷��� �ۼ��϶� 
               ���� ������ 10�� �������� �Է¹޾ƾ� �Ѵ�, ���� ��� 100�� �̸� ���縦 �Ϸ��� ���� ������ 2�� �Է¹޴´�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Print(void);
int Truncation(int money, int base);

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    int money, unit;

    printf("�ݾ�? ");
    scanf("%d", &money);
    printf("������� (10�� ������)? ");
    scanf("%d", &unit);

    if (unit == 0)
    {
        printf("�ݾ�(�� ����): %d", money);
    }
    else
    {
        int base = (int)pow(10, unit);
        int result = Truncation(money, base);

        printf("�ݾ�(%d �̸� ����): %d", base, result);
    }
}

int Truncation(int money, int base)
{
    return money / base * base;
}