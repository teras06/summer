/* ���ϸ�: assign12.c

 * ����: PA12. ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�, ������ ������ ���� �¼��� ��� 10����� �Ѵ�
               ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�, ������ ������ �� �¼��� ���¸� ����Ѵ�
               O�̸� ���Ű���, X�� ���� �Ұ��� �ǹ��Ѵ�, �� �̻� ������ �������� ���α׷��� �����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void rservation(int arr[]);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[10] = { 0 };

    reservation(arr);
}

reservation(int arr[])
{
    int i, r;

    while (1)
    {
        printf("���� �¼�: [ ");
        for (i = 0; i < 10; i++)
        {
            if (arr[i] == 1)
            {
                printf("X ");
            }
            else
            {
                printf("O ");
            }
        }
        printf("]\n");


        printf("������ �¼� ��? ");
        scanf("%d", &r);


        for (i = 0; i < 10; i++)
        {
            if (arr[i] == 0 && r > 0)
            {
                arr[i] = 1;
                printf("%d ", i + 1);
                r--;
            }
        }
        printf("�� �¼��� �����߽��ϴ�.\n");


        if (arr[9] == 1)
        {
            break;
        }
    }
}
