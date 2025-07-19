/* ���ϸ�: assign08.c

 * ����: PA08. ��ǰ ������ ����� ������ �迭�� ���Ͽ� ������(%)�� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��϶�
               ��ǰ ������ ����� �迭�� ũ��� 5�̰�, ��ǰ ������ �Է¹޾Ƽ� ����Ѵ�
               ���ε� ������ ������ �迭�� �����ؾ� �Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5
#include <stdio.h>

void Print(void);
void discount_arr(int discount[], int arr[], int discount_rate, int size);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int discount_rate;
	int arr[ARR_SIZE];
	int discount[ARR_SIZE];

	printf("��ǰ�� 5���� �Է��ϼ���:\n");

	int i;
	for (i = 0; i < ARR_SIZE; i++) 
	{
		scanf("%d", &arr[i]);
	}

	printf("������(%%)? ");
	scanf("%d", &discount_rate);

	discount_arr(discount, arr, discount_rate, ARR_SIZE);

	for (i = 0; i < ARR_SIZE; i++) 
	{
		printf("����:%7d --> ���ΰ�:%7d\n", arr[i], discount[i]);
	}
}

void discount_arr(int discount[], int arr[], int discount_rate, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		discount[i] = (arr[i] / 100) * (100 - discount_rate);
	}
}


