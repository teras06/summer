/* ���ϸ�: assign18.c

 * ����: PA18. 17���� ���� ��� ���� ���α׷��� ���� �ð��� 0�� �Էµ� ������ �ݺ� ����ǵ��� �����϶�

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

    while (1)
    {
        printf("���� �ð�(��)? ");
        scanf("%d", &minute);

        if (minute <= -1)
        {
            printf("�߸��� �Է��Դϴ�.\n");
            continue;
        }

        if (minute == 0)
        {
            return;
        }

        if (minute > 1440)
        {
            printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.\n");
            continue;
        }

        if (minute <= 30)
        {
            charge = 2000;
        }
        else
        {
            charge = 2000 + ((minute - 30 + 9) / 10) * 1000;

            if (charge > 25000)
                charge = 25000;
        }

        printf("���� ���: %d��\n", charge);
    }
}