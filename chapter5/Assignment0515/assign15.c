/* ���ϸ�: assign15.c

 * ����: PA15. �Ƹ�����Ʈ�� ����ϴ� ���� �ۼ��϶�, �ñް� ���� �ٹ� �ð�, �� �� �ٹ� �ϼ�, ���� ���� ���θ� �Է¹޾� ���� ������ ������ ����϶� 
               ���� ���� ���δ� ������, 4�뺸�� ���� 8.41%, �ҵ漼 ���� 3.3% �� �ϳ��� ������ �� �ְ� �϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Alba(void);

int main()
{
    Alba();
    return 0;
}

void Alba(void)
{
    int hourly_rate, day, hour, duty; // �ñ�, ���� �ٹ� �ð�, �Ѵ� �ٹ� �ϼ�, ����

    printf("�ð��� �޿�? ");
    scanf("%d", &hourly_rate);
    printf("���� �ٹ� �ð�? ");
    scanf("%d", &hour);
    printf("�Ѵ� �ٹ� �ϼ�? ");
    scanf("%d", &day);
    printf("���� ���� ���� 0:������, 1:4�뺸�����(8.41%%), 2:�ҵ漼����(3.3%%)? ");
    scanf("%d", &duty);

    double salary = hourly_rate * hour * day; // ����

    switch (duty)
    {
    case 0:
        printf("���� ���޿�: %.0f��", salary);
        break;
    case 1:
        printf("���� ���޿�: %.0f��", salary - (salary * 0.0841));
        break;
    case 2:
        printf("���� ���޿�: %.0f��", salary - (salary * 0.033));
        break;
    }
}
