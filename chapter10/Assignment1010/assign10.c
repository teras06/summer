/* ���ϸ�: assign10.c

 * ����: PA10. PRODUCT ����ü�� �̿��ؼ� �ִ� 5���� ��ǰ ������ �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��϶� 
               ��ǰ������ "."�� �Էµǰų� 5���� ��ǰ ������ ��� �Է��ϸ�, ���ݱ��� �Էµ� ��ǰ ������ ����ϰ� �����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.30
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

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    PRODUCT a[5];
    int count = 0;

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("��ǰ��? ");
        scanf("%s", a[i].name);

        if (strcmp(a[i].name, ".") == 0)
        {
            break;
        }

        printf("���� ���? ");
        scanf("%d %d", &a[i].price, &a[i].inven);
        count++;
    }

    if (count == 0)
    {
        printf("�Էµ� ��ǰ ������ �����ϴ�.\n");
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            printf("[%s %d�� ���:%d]\n", a[i].name, a[i].price, a[i].inven);
        }
    }


}