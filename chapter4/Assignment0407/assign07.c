/* ���ϸ�: assign07.c

 * ����: PA07. ���� �ﰢ������ ������ �� �� �� a, b�� ���̸� �Է¹޾� ������ ���̸� ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Hypotenuse(void);

int main()
{
	Hypotenuse();
	return 0;
}

void Hypotenuse(void) // ����
{
	double a, b, c; //�غ�, ����, ����

	printf("�غ�? ");
	scanf("%lf", &a);
	printf("����? ");
	scanf("%lf", &b);

	c = sqrt((a * a) + (b * b));

	printf("������ ����: %.6lf", c);
}