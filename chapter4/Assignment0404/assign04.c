/* ���ϸ�: assign04.c

 * ����: PA04. ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ� ���α׷��� �ۼ��϶�
			   ����� ������ ������ ������ g ������ �Է¹޴´�

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

void Density(void) //��
{
	double menstruum, solute, density; //�D��, ����, ��

	printf("���(g)? ");
	scanf("%lf", &menstruum);
	printf("����(g)? ");
	scanf("%lf", &solute);

	density = (solute / (menstruum + solute)) * 100;

	printf("��: %.2lf %%", density);
}