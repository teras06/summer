/* ���ϸ�: assign17.c

 * ����: PA17. ���ڷ� ���޵� ���� ��ǥ�� ��� ��и��� ������ �����ϴ� get_quadrant �Լ��� �ۼ��϶� 
               1~4��и��̸� 1~4�� �����ϰ�, �����̳� x�� �Ǵ� y�� ���� ���� 0�� �����ϵ��� �ۼ��϶� 
			   get_quadrant �Լ��� �̿��ؼ� �Է¹��� ���� ��ǥ�� ��� ��и��� ������ ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_quadrant(int x, int y);
void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int x, y;
	while (1)
	{
		printf("���� ��ǥ (x,y)? ");
		scanf("%d %d", &x, &y);

		if (get_quadrant(x, y) == 0)
		{
			break;
		}
		printf("%d�и��� ���Դϴ�.\n", get_quadrant(x, y));
	}
}


int get_quadrant(int x, int y)
{
if (x > 0 && y > 0)
{
	return 1;
}
else if (x < 0 && y > 0)
{
	return 2;
}
else if (x < 0 && y < 0)
{
	return 3;;
}
else if (x > 0 && y < 0)
{
	return 4;
}
else if (x == 0 && y == 0)
{
	return 0;
}
else
{
	return 0;
}
}
