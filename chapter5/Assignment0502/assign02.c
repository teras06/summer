/* ���ϸ�: assign02.c

 * ����: PA02. ������ ��鿡 �ִ� ���� ��ǥ (x,y)�� �Է¹޾� ��� ��и��� ������ ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Quadrant(void);

int main(void)
{
	Quadrant();
	return 0;
}

void Quadrant(void)
{
	int x, y;

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y > 0)
	{
		printf("2��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3��и鿡 �ֽ��ϴ�.");
	}
	else if (x > 0 && y < 0)
	{
		printf("4��и鿡 �ֽ��ϴ�.");
	}
	else if (x == 0 && y == 0)
	{
		printf("������ �ֽ��ϴ�.");
	}
	else
	{
		printf("��ǥ�࿡ �ֽ��ϴ�.");
	}
}