/* ���ϸ�: assign13.c

 * ����: PA13. ������ �������� ��ǥ(x1, y1)�� ������ ��ǥ(x2, y2)�� ���¹޾� �� ���� �����ϴ� ������ ���̸� ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void StraightLine(void);

int main()
{
	StraightLine();
	return 0;
}

void StraightLine(void)
{
	double x1, x2, y1, y2;

	printf("������ ������ (x1, y1)? ");
	scanf("%lf %lf", &x1, &y1);
	printf("������ ���� (x2, y2)? ");
	scanf("%lf %lf", &x2, &y2);

	double length = sqrt(((x1-x2) * (x1-x2)) + ((y1-y2) * (y1-y2)));

	printf("������ ����: %.06f", length);
}