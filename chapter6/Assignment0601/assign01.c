/* ���ϸ�: assign01.c

 * ����: PA01. ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��϶�
			   get_perimeter �Լ��� �̿��ؼ� �Է¹��� �� ���� ���̷� ���簢���� ���̸� ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int get_perimeter(int x, int y);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int x, y;

	printf("����? ");
	scanf("%d", &x);
	printf("����? ");
	scanf("%d", &y);

	printf("���簢���� �ѷ�: %d", get_perimeter(x, y));
}

int get_perimeter(int x, int y)
{
	return (x + y) * 2;
}