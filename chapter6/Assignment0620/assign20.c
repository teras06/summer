/* ���ϸ�: assign20.c

 * ����: PA20. ���ڷ� ���޵� �� ��뷮���� ���� ����� ����ϴ� electric_charge �Լ��� �ۼ��϶� 
               ���� ����� �⺻ ��ݰ� �� ��뷮�� ���� ���·� ������� ���ȴ� 
               ������ ���ǥ �����Ͽ� �ܰ躰�� ����Ǵ� �⺻ ��ݰ� ���·� ����� ����϶� 
               �Լ��� �̿��ؼ� �� ��뷮�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int electric_charge(int usage);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int usage;

    while (1)
    {
        printf("�� ��뷮 (kMh)? ");
        scanf("%d", &usage);

        if (usage < 0)
        {
            break;
        }

        int charge = electric_charge(usage);

        printf("������:%8d��\n", charge);
    }
}

int electric_charge(int usage)
{
    int baseCharge; //�⺻���
    double energyCharge, total; ///���·����, ���� ���

    if (usage <= 200)
    {
        baseCharge = 910;
    }
    else if (usage <= 400)
    {
        baseCharge = 1600;
    }
    else
    {
        baseCharge = 7300;
    }


    if (usage <= 200)
    {
        energyCharge = usage * 93.3;
    }
    else if (usage <= 400)
    {
        energyCharge = (200 * 93.3) + ((usage - 200) * 187.9);
    }
    else
    {
        energyCharge = (200 * 93.3) + (200 * 187.9) + ((usage - 400) * 280.6);
    }

    total = baseCharge + energyCharge;

    return total;
}