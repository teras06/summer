/* ���ϸ�: assign09.c

 * ����: PA09. �� ũ�Ⱑ 5�� 2���� int �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_2d_array �Լ��� �ۼ��϶�
               �Լ��� �Ű������� �迭 ��ü�� ���� �����Ϳ� �迭�� �� ũ�⸦ �����Ѵ�
               �� ũ�Ⱑ 5, �� ũ�Ⱑ 4�� 2���� �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#define ROWS 4
#define COLS 5
#include <stdio.h>

void Print(void);
void fill_2d_array(int (*arr)[COLS], int rows, int value);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[ROWS][COLS];
	int value;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &value);

	fill_2d_array(arr, ROWS, value);

	int i, j;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void fill_2d_array(int (*arr)[COLS], int rows, int value)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			arr[i][j] = value;
		}
	}
}