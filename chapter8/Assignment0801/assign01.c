/* ���ϸ�: assign01.c

 * ����: PA01. ũ�Ⱑ 3�� double�� �迭�� ��� ������ �ּҸ� ����ϴ� ���α׷��� �ۼ��϶� 
               ��, �ּ� ���ϱ� �����ڸ� ������� ����

 * �ۼ���: �迵��

 * ��¥: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
	double arr[3];
	double* p = arr;

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("x[%d]�� �ּ�: %X\n", i, p + i);
	}
}