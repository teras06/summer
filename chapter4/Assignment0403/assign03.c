/* ���ϸ�: assign03.c

 * ����: PA03. ������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷��� �ۼ��϶�
			   ������ g ������ �Է¹ް�, ���Ǵ� cm^3 ������ �Է¹޴´�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Density(void);

int main()
{
	Density();
	return 0;
}

void Density(void) //�е�
{
	int weight, volume;

	printf("����(g)? ");
	scanf("%d", &weight);
	printf("����(��������Ƽ����)? ");
	scanf("%d", &volume);

	double density = (double)weight / (double)volume;

	printf("�е�: %06lf", density);
}