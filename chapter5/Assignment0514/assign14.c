/* ���ϸ�: assign14.c

 * ����: PA14. ��ӵ���dml ���� �ܼ� ��� �� �ϳ��� ���� �ܼ��� ���� �ܼ� ���� �������� ���� ���������� �ҿ� �ð��� �Ÿ��� �̿��ؼ� 
               ��� ���� �ӷ��� ���ϰ� �� ������ �ӵ� ���� ���θ� �Ǵ��ϴ� ����̴� 
               ���� �ܼ� ���� �������� ���� ���������� �ҿ� �ð��� ������ �Է� �ް� ����Ÿ��� km�� �Է¹޾Ƽ� 
               ��� �ӷ��� 100km/h �̻��̸� ������ ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
double Speeding(int time, int distance);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int time, distance;

    printf("���� �ܼ� �ҿ� �ð� (��)? ");
    scanf("%d", &time);
    printf("���� �ܼ� ���� �Ÿ� (KM)? ");
    scanf("%d", &distance);

    double speed = Speeding(time, distance);

    if (speed >= 100)
    {
        printf("��� �ӷ��� %.1f KM/h�Դϴ�. ���� �ܼ� �����Դϴ�.", speed);
    }
    else
    {
        printf("��� �ӷ��� %.1f KM/h�Դϴ�. ���� �����ϴ�.", speed);
    }
    
}

double Speeding(int time, int distance)
{
    return distance / (time / 60.0);
}