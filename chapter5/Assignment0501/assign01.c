/* ���ϸ�: assign01.c

 * ����: PA01. ���� ��ǥ�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��϶�
			   ��ũ�� ���� ���� ������ ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Point(void);

int main(void)
{
	Point();
	return 0;
}

void Point(void)
{
	int left, up, right, down;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &up);
	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &down);

	int x, y;

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= up && y <= down)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
	else if (x <= left && x >= right && y <= up && y >= down)
	{
		printf("���� ���� ���� ���Դϴ�.\n");
	}
	else
	{
		printf("�Է°��� �ùٸ��� �ʽ��ϴ�.\n");
	}
}