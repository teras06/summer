/* ���ϸ�: assign11.c

 * ����: PA11. ��ǰ�� ���ݰ� ������(%)�� �Է¹޾Ƽ� ���ΰ��� ������ �ݾ��� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Discount(void);

int main()
{
	Discount();
	return 0;
}

void Discount(void)
{
	int price, overcharge, discount_price; //����, ������, ���ΰ�
	double discount; //������

	printf("��ǰ�� ����? ");
	scanf("%d", &price);
	printf("������(%%)? ");
	scanf("%lf", &discount);

	overcharge = price * discount / 100;

	discount_price = price - overcharge;

	printf("���ΰ�: %d(%d�� ����)", discount_price, overcharge);
}