/* ���ϸ�: assign15.c

 * ����: PA15. ������ �迭�� �Ű������� ���޹޾� �迭 ��ü�� 0���� ä��� zero_array �Լ��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void zero_array(int arr[], int size);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);

	zero_array(arr, size);

	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void zero_array(int arr[], int size) 
{
	int i;

	for (i = 0; i < size; i++) 
	{
		arr[i] = 0;
	}
}