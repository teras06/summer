/* ���ϸ�: assign16.c

 * ����: PA16. ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ã�� �ε����� �����ϴ� find_array �Լ��� �ۼ��϶�
               ���� Ű ���� ã�� �� ������ -1�� �����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int fine_arr(int arr[], int key, int size);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	int key;

	printf("ã�� ��? ");
	scanf("%d", &key);

	int result = fine_arr(arr, key, size);

	if (result == -1)
	{
		printf("%d�� �����ϴ�", key);
	}
	else
	{
		printf("%d�� %d��° �����Դϴ�", key, result);
	}
}

int fine_arr(int arr[], int key, int size) 
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (key == arr[i]) 
		{
			return i;
		}
	}

	return -1;
}