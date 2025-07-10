/* ���ϸ�: assign04.c

 * ����: PA04. ��ǰ�� ���ݰ� ������ ���ڷ� �޾Ƽ� ���ΰ��� �����ϴ� discount_price �Լ��� �����϶� 
               discount_price �Լ��� �̿��ؼ� �ǸŵǴ� ��ǰ�� ���ؼ� ������ �������� �����ؼ� ���ΰ��� ���ϴ� ���α׷��� �ۼ��϶� 
               �������� ���� �Է¹��� ����, �ݺ������� �Էµ� ��ǰ�� ���ݿ� ���Ͽ� ���ΰ��� ���ؼ� ����ϸ�, 
               ��ǰ�� �������� 0�� �ԷµǸ� ���α׷��� �����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
double discount_price(double price, double discount_rate);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double price, discount_rate;

    printf("������(%%)? ");
    scanf("%lf", &discount_rate);

    discount_rate = discount_rate / 100;

    while (1)
    {
        printf("��ǰ�� ����? ");
        scanf("%lf", &price);

        if (price == 0)
        {
            return;
        }
        else
        {
            printf("���ΰ�: %.0f��\n", discount_price(price, discount_rate));
        }
    }
}

double discount_price(double price, double discount_rate)
{
    return price - (price * discount_rate);
}