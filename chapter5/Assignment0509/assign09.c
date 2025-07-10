/* ���ϸ�: assign09.c

 * ����: PA09. �ܹ��� ������ ��꼭 ���α׷��� �ۼ��϶� �ܹ��Ŵ� 4000��, �ݶ�� 1500��, ����Ƣ���� 2000���̰�,
               �� ������ ��Ʈ�� �ֹ��ϸ� 6500���̶�� ����. �ܹ���, �ݶ�, ����Ƣ���� ������ �Է¹޾Ƽ� �ִ��� ��Ʈ�� �����ϰ�
               �������� ��ǰ���� ����ϵ��� �Ѵ�. ���� ��� �ܹ��� 2, �� �� 1, ����Ƣ�� 3�� �ֹ��ϸ�
               ����� ��Ʈ 1, �ܹ��� 1, ����Ƣ�� 2�� �ؾ� �Ѵ�.

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Bill(void);

int main(void)
{
    Bill();
    return 0;
}

void Bill(void)
{
    int ham, fry, cola, set, total;

    printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");

    printf("�ܹ��� ����? ");
    scanf("%d", &ham);
    printf("����Ƣ�� ����? ");
    scanf("%d", &fry);
    printf("�ݶ� ����? ");
    scanf("%d", &cola);


    set = ham;
    if (fry < set) set = fry;
    if (cola < set) set = cola;


    ham -= set;
    fry -= set;
    cola -= set;


    total = set * 6500 + ham * 4000 + fry * 2000 + cola * 1500;


    printf("\n��ǰ��       �ܰ�    ����    �ݾ�\n");
    if (set > 0) {
        printf("%-10s %6d %6d %8d\n", "��Ʈ", 6500, set, set * 6500);
    }
    if (ham > 0) {
        printf("%-10s %6d %6d %8d\n", "�ܹ���", 4000, ham, ham * 4000);
    }
    if (fry > 0) {
        printf("%-10s %6d %6d %8d\n", "����Ƣ��", 2000, fry, fry * 2000);
    }
    if (cola > 0) {
        printf("%-10s %6d %6d %8d\n", "�ݶ�", 1500, cola, cola * 1500);
    }

    printf("--------------------------------------\n");
    printf("�հ�%29d", total);
}