/* ���ϸ�: assign01.c

 * ����: PA01. ������ �ӷ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��϶�
			   ������ kg ����, �ӷ��� m/s ������ �Է¹޴´�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double KineticEnergy(double weight, double speed);
void Print(void);

int main(void)
{
	Print();
	return 0;
}

void Print(void)
{
	double weight, speed;

	printf("����(kg)? ");
	scanf("%lf", &weight);
	printf("�ӷ�(m/s)? ");
	scanf("%lf", &speed);

	double result = KineticEnergy(weight, speed);

	printf("�������: %.2f J", result);
}


double KineticEnergy(double weight, double speed)
{
	double result = 1.0 / 2.0 * weight * speed * speed;

	return result;
}