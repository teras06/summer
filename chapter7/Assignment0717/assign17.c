/* ���ϸ�: assign17.c

 * ����: PA17. ���п��� ��������(multiset)�� ������ �ߺ��� ����Ѵ� �ִ� 10���� ������ ���Ҹ� ������ �� �ִ� ���������� ���α׷��϶�
               ������ �Է¹޾� ������ ���Ҹ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.17
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
	int arr[10];

	int i, j;
	for (i = 0; i < 10; i++)
	{
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &arr[i]);

		for (j = 0; j <= i; j++) 
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
}