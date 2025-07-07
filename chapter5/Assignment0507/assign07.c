/* ���ϸ�: assign07.c

 * ����: PA07. ���� ����� �⺻ ��ݰ� �� ��뷮�� ���� ������� ���Ǵµ�, �����δ� �������� ����Ǿ� �ܰ躰�� ����Ǵ� �⺻ ��ݰ� �� ��뷮 ����� �޶�����
               ������ ������ ���ǥ�� �����ѿ� �� ��뷮�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ElectricityBill(void);

int main() {
    ElectricityBill();
    return 0;
}

void ElectricityBill(void) 
{
    int usage, baseCharge;       
    double energyCharge, total;

    printf("�� ��뷮(kWh)? ");
    scanf("%d", &usage);

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

    printf("������ �հ�: %.0f��\n", total);
    printf("   - �⺻���:  %d��\n", baseCharge);
    printf(" - ���·����: %.0f��", energyCharge);
}