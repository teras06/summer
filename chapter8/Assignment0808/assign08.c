/* ���ϸ�: assign08.c

 * ����: PA08. ������ �迭�� Ư�� ������ ä��� fill_array �Լ��� �ۼ��϶� ��, �����Ϳ� ������ ������ �����ڸ� �̿��Ѵ�
               fill_array �Լ��� �̿��ؼ� ũ�Ⱑ 20�� int �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.19
 */


#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 20
#include <stdio.h>

void Print(void);
void fill_array(int *arr, int size, int value);

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
		printf("%d ", *(arr + i));
	}
}

void fill_array(int *arr, int size, int value)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(arr + i) = value;
	}
}