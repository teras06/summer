/* ���ϸ�: assign02.c

 * ����: PA02. ȭ�� �µ�(��F)�� �Է¹޾� ���� �µ�(��C)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Tem(void);

int main(void)
{
	Tem();
	return 0;
}

void Tem(void)
{
	double Ftem, Ctem;

	printf("ȭ���µ�? ");
	scanf("%lf", &Ftem);

	Ctem = (Ftem - 32) * (5.0 / 9.0);

	printf("%.2lf F = %.2lf C", Ftem, Ctem);
}