/* ���ϸ�: assign02.c

 * ����: PA02. �� ���� ���̸� �Ű������� ���޹޾� ���簢���� ���̸� ���ϴ� get_area_of_square �Լ��� �ۼ��϶�
               get_area_of_square �Լ��� �̿��ؼ� �Է¹��� �� ���� ���̷� ���簢���� ���̸� ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
double get_area_of_square(double x);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	double x;

	printf("�� ���� ����? ");
	scanf("%lf", &x);

	printf("���簢���� ����: %f", get_area_of_square(x));
}

double get_area_of_square(double x)
{
	return x * x;
}