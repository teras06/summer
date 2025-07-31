/* ���ϸ�: assign11.c

 * ����: PA11. ���簢���� ���̿� �ѷ��� ���ϴ� get_rect_info �Լ��� �ۼ��϶� ���簢���� ����, ������ ���̸� �Է¹��� ���� 
               get_rect_info �Լ��� �̿��ؼ� ���簢���� ���̿� �ѷ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.22
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void get_rect_info(int width, int length, int* area, int* perimeter);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int width, length;
	int area, perimeter;

	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &length);

	get_rect_info(width, length, &area, &perimeter);

	printf("����: %d, �ѷ�: %d", area, perimeter);
}

void get_rect_info(int width, int length, int* area, int* perimeter)
{
	*area = width * length;
	*perimeter = 2 * (width + length);
}
