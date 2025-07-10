/* ���ϸ�: assign03.c

 * ����: PA03. �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��϶�
			   distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Print(void);
double distancee(int a, int b, int c, int d);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int x1, x2, y1, y2;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1, &y1);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	double length = distancee(x1, x2, y1, y2);

	printf("(%d, %d)~(%d, %d) ������ ����: %f", x1, y1, x2, y2, length);
}

double distancee(int a, int b, int c, int d)
{
	int x = pow(a - b, 2);
	int y = pow(c - d, 2);

	double z = sqrt(x + y);

	return z;
}