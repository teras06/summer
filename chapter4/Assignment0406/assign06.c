/* ���ϸ�: assign06.c

 * ����: PA06. �� A�� ��ǥ(x1, y1)�� �� B�� ��ǥ(x2, y2)�� �Է¹޾� �� �� A, B�� ������ ������ ���⸦ ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Inclination(void);

int main()
{
	Inclination();
	return 0;
}

void Inclination(void) //����
{
	double inclination, x1, x2, y1, y2;

	printf("�� ���� ��ǥ (x1, y1)? ");
	scanf("%lf %lf", &x1, &y1);
	printf("�� �ٸ� ���� ��ǥ (x2, y2)? ");
	scanf("%lf %lf", &x2, &y2);

	inclination = (y2 - y1) / (x2 - x1);

	printf("������ ����: %.6lf", inclination);
}