/* ���ϸ�: assign14.c

 * ����: PA14. �⺻ ��ݰ� �� ��뷮(kWh)�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��϶�, ��뷮�� ���� ����� 190��/hWh�̴�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ElectricityBill(void);

int main()
{
	ElectricityBill();
	return 0;
}

void ElectricityBill(void)
{
	int bill, Ebill, amount;

	printf("�⺻ ���? ");
	scanf("%d", &bill);
	printf("�� ��뷮(kWh)? ");
	scanf("%d", &amount);

	Ebill = bill + amount * 190;

	printf("���� ���: %d��", Ebill);
}