/* ���ϸ�: assign12.c

 * ����: PA12. ���ݰ� �� ������ �Է¹޾� 1~10�� ���� �������� ���ڸ� ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Compound(void);

int main()
{
    Compound();
    return 0;
}

void Compound(void)
{
    int principal; //����
    double apr; //������

    printf("����? ");
    scanf("%d", &principal);
    printf("������(%%)? ");
    scanf("%lf", &apr);

    apr = apr / 100.0;
    double compound = principal; // �����հ�

    int i;

    for (i = 1;i < 11;i++)
    {
        double interest = compound * apr; //����
        compound += interest;

        printf("%2d��° ���� %.2f, �����հ�: %.2f\n", i, interest, compound);
    }
}