/* ���ϸ�: assign07.c

 * ����: PA07. ������ �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_array �Լ��� �ۼ��϶�
               ���� ��� fill_array(arr, 10, 1);�� ũ�Ⱑ 10�� arr �迭�� ��� ���ҿ� 1�� �����϶�� �ǹ��̴�.
               ũ�Ⱑ 20�� �迭�� �����ؼ� �Է¹��� ������ �迭 ��ü�� ä��� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 20
#include <stdio.h>

void Print(void);
void fill_array(int arr[], int size, int value);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[ARR_SIZE];
	int value;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &value);

	fill_array(arr, ARR_SIZE, value);

	int i;
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
}

void fill_array(int arr[], int size, int value)
{
	int i;
	for (i = 0; i < size; i++) 
	{
		arr[i] = value;
	}
}