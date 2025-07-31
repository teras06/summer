/* ���ϸ�: assign08.c

 * ����: PA08. �Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����϶� �� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�
               PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����϶�
               PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��϶�
               ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.

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

void print_product(PRODUCT a);
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

    print_product(a);
}

void print_product(PRODUCT a)
{
    printf("[%s %d�� ���:%d]", a.name, a.price, a.inven);
}