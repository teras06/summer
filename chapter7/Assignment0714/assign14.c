/* ���ϸ�: assign14.c

 * ����: PA14. ���� ��� ���α׷����� ��� ��Ͽ� �ִ� ����� ������ ������ �ڼ��� ���� ����� �ִ�
               �� ���� ���ó�� ũ�Ⱑ 10�� ������ �迭�� ���Ҹ� ������ ������ �ڼ��� ���α׷��� �ۼ��϶�
               ũ�Ⱑ 10�� ������ �迭�� 0~99������ ������ ������ ä���� �׽�Ʈ�Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(void);
void shuffle(int arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
	int i;
	int arr[10];

	srand((unsigned int)time(0));

	printf("���� ��:");

	for (i = 0; i < 10; i++) 
	{
		arr[i] = rand() % 100;

		printf(" %2d", arr[i]);
	}

	shuffle(arr, 10);

	printf("\n���� ��:");
	for (i = 0; i < 10; i++) 
	{
		printf(" %2d", arr[i]);
	}
}

void shuffle(int arr[], int size)
{
	int i;
	for (i = size - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}