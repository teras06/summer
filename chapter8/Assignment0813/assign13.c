/* ���ϸ�: assign13.c

 * ����: PA13. ũ�Ⱑ ���� 2���� ������ �迭�� �Ű������� ���޹޾� �� �迭�� ���ҵ��� ���� �¹ٲٴ� swap_array �Լ��� �ۼ��϶�
               swap_array �Լ��� �̿��ؼ� ũ�Ⱑ 10�� �� �迭�� ���� �¹ٲٴ� ���α׷��� �ۼ��϶� �迭�� �ʱⰪ�� ������� ���ص� �ȴ�.

 * �ۼ���: �迵��

 * ��¥: 2025.07.22
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
void swap_array(int* arr1, int* arr2);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
	int a[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int b[] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };
	int i;

	printf("a:");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf(" %2d", a[i]);
	}
	printf("\n");

	printf("b:");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf(" %2d", b[i]);
	}
	printf("\n");

	printf("<< swap_array ȣ�� �� >>\n");

	swap_array(a, b);

	printf("a:");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf(" %2d", a[i]);
	}
	printf("\n");

	printf("b:");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf(" %2d", b[i]);
	}
}

void swap_array(int* arr1, int* arr2) 
{
	int temp;

	int i;
	for (i = 0; i < ARR_SIZE; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}