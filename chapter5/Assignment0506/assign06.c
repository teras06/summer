/* ���ϸ�: assign06.c

 * ����: PA06. ������ �Է¹޾� ���� �������ͷ�, �������ʹ� ������ ��ȯ�ϴ� ���α׷��� �ۼ��϶� 
               "50 ��" �Ǵ� "50 m"ó�� ������ �Է¹��� ��, ������ ������������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´� 
               �Բ� �Էµ� ���ڰ� 'p'�� ���̹Ƿ� �������͸� ���ؼ� ����ϰ�, �Էµ� ���ڰ� 'm'�� ���������̹Ƿ� ���� ���ؼ� ����Ѵ� 
               1m���� 0.3025�� �ش��ϰ�, 1���� 3.305785m���� �ش��Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ExtentConversion();

int main(void)
{
    ExtentConversion();
    return 0;
}

void ExtentConversion(void)
{
    double extent;
    char unit;

    printf("����? ");
    scanf("%lf %c", &extent, &unit);

    if (unit == 'm')
    {
        double p = extent * 0.3025;
        printf("%.2f �������� == %.2f ��", extent, p);
    }
    else if (unit == 'p')
    {
        double m = extent * 3.305785;
        printf("%.2f �� == %.2f ��������", extent, m);
    }
    else
    {
        printf("�߸� �Է��ϼ̽��ϴ�");
    }
}