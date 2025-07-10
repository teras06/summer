/* ���ϸ�: assign17.c

 * ����: PA17. ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��϶� ���� ����� ���� 30���� 2000��, 
               �� ���Ĵ� 10�д� 1000�������� ����ϸ�, �Ϸ� �ִ� 25000���� ���� �� ����, ���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Parking();

int main(void)
{
    Parking();
    return 0;
}

void Parking(void)
{
    int minute, charge;

    printf("���� �ð�(��)? ");
    scanf("%d", &minute);

    if (minute <= 0)
    {
        printf("�߸��� �Է��Դϴ�.\n");
        return;
    }

    if (minute <= 30)
    {
        charge = 2000;
    }
    else if (minute > 1440)
    {
        printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.");
        return;
    }
    else
    {
        charge = 2000 + ((minute - 30 + 9) / 10) * 1000;

        if (charge > 25000)
            charge = 25000;
    }

    printf("���� ���: %d��", charge);
}