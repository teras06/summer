/* ���ϸ�: assign09.c

 * ����: PA09. PRODUCT ����ü�� �Ű������� ���޹޾� �ֹ� ó���� �ϴ� order �Լ��� �����϶� order �Լ��� PRODUCT ����ü�� �ֹ� ������ �Ű������� ���޹޴� �Լ��̴� 
               ��� �ֹ� �������� ������ �ֹ��� �� �����Ƿ� 0�� �����ϰ�, ��� �ֹ� �������� ������ �ֹ� ������ŭ ��� ���ҽ�Ű�� ���� �ݾ��� �����Ѵ� 
               �ֹ� �������� 0�� �Էµ� ������ �ݺ��ؼ� �ֹ� ó���� �ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct product
{
    char name[20];
    int price;
    int inven;

} PRODUCT;

int order(PRODUCT* p, int amount);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    PRODUCT a;

    printf("��ǰ��? ");
    scanf("%s", a.name);
    printf("����? ");
    scanf("%d", &a.price);
    printf("���? ");
    scanf("%d", &a.inven);

    int amount;
    int total = 0;

    while (1) 
    {
        printf("�ֹ� ����? ");
        scanf("%d", &amount);

        if (amount == 0)
        {
            break;
        }

        int payment = order(&a, amount);

        if (payment > 0) 
        {
            printf("���� �ݾ�: %d, ���: %d\n", payment, a.inven);
            total += payment;
        }
    }
}

int order(PRODUCT* p, int amount) 
{
    if (amount == 0)
    {
        return 0;
    }

    if (amount > p->inven) 
    {
        printf("��� �����մϴ�.\n");
        return 0;
    }
    else 
    {
        p->inven -= amount;
        return amount * p->price;
    }
}