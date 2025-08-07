/* ���ϸ�: assign11.c

 * ����: PA11. PRODUCT ����ü �迭�� �̿��ؼ� ��ǰ���� �Է¹޾� �˻� �� �ֹ� ó���ϴ� ���α׷��� �ۼ��϶� 
               �ֹ� ������ �Է¹޾� ���� �ݾ��� �˷� �ְ�, ��ǰ ���� �ֹ� ������ŭ ���ҽ��Ѿ� �Ѵ� ��ǰ������ �˻��� �� ���ų� ã�� ��ǰ�� ��� 
               �ֹ� �������� ������ ���� �޽����� ����Ѵ� PRODUCT ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.08.04
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct product
{
    char name[20];
    int price;
    int inven;
} PRODUCT;

void Print(void);
void order(PRODUCT products[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    PRODUCT products[5] = {
        {"�Ƹ޸�ī��", 4000, 10},
        {"ī���", 4500, 10},
        {"�÷�ȭ��Ʈ", 5000, 10},
        {"���̽�Ƽ", 3000, 10},
        {"����������", 4000, 10}
    };

    order(products, 5);
}

void order(PRODUCT products[], int size)
{
    char name[20];
    int amount;

    while (1)
    {
        printf("�ֹ��� ��ǰ��? ");
        scanf("%s", name);

        if (strcmp(name, ".") == 0)
        {
            break;
        }


        int found = 0;
        for (int i = 0; i < size; i++)
        {
            if (strcmp(products[i].name, name) == 0)
            {
                found = 1;

                printf("�ֹ��� ����? ");
                scanf("%d", &amount);

                if (amount <= 0)
                {
                    printf("�ֹ� ������ 1 �̻��̾�� �մϴ�.\n");
                    break;
                }

                if (products[i].inven < amount)
                {
                    printf("��� �����մϴ�. ���� ���: %d\n", products[i].inven);
                }
                else
                {
                    products[i].inven -= amount;
                    int total = amount * products[i].price;
                    printf("���� �ݾ�: %d  %s ���: %d\n", total, products[i].name, products[i].inven);
                }

                break;
            }
        }

        if (!found)
        {
            printf("�ش� ��ǰ�� �����ϴ�.\n");
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("[%s %d�� ���:%d]\n", products[i].name, products[i].price, products[i].inven);
    }
}
