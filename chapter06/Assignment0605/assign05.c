/* ���ϸ�: assign05.c

 * ����: PA04. ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��϶� 
               �� �Լ��� �̿��ؼ� 0�� �Էµ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void is_even(int x);
void in_oss(int y);

int even = 0;
int odd = 0;

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	while (1)
	{
		int i;

		scanf("%d", &i);

		if (i == 0)
			break;

		is_even(i);
		in_oss(i);
	}
	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d�� �Դϴ�.", even, odd);
}

void is_even(int x)
{
	if (x % 2 == 0)
	{
		even = even + 1;
	}
}


void in_oss(int y)
{
	if (y % 2 == 1)
	{
		odd = odd + 1;
	}
}