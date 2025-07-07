/* ���ϸ�: assign05.c

 * ����: PA05. �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��϶�
               "27 C" �Ǵ� "27 F"ó�� �µ��� �Է¹��� �� �������� ȭ������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´�
               �Բ� �Էµ� ���ڰ� 'C'�� ���� �µ��̹Ƿ� ȭ�� �µ��� ���ؼ� ����ϰ�, �Էµ� ���ڰ� 'F'�� ȭ�� �µ��̹Ƿ� ���� �µ��� ���ؼ� ����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void TempConversion();

int main(void)
{
    Conversion();
    return 0;
}

void Conversion(void)
{
    double temp;
    char unit;

    printf("�µ�? ");
    scanf("%lf %c", &temp, &unit);

    if (unit == 'C')
    {
        double f = temp * 9.0 / 5.0 + 32;
        printf("%.2f C ==> %.2f F", temp, f);
    }
    else if (unit == 'F')
    {
        double c = (temp - 32) * 5.0 / 9.0;
        printf("%.2f F ==> %.2f C", temp, c);
    }
    else
    {
        printf("�߸� �Է��ϼ̽��ϴ�");
    }
}