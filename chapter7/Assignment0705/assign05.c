/* ���ϸ�: assign05.c

 * ����: PA05. Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� ����ڰ� �Է��� ���� �迭�� ���������� �������� ã�Ƽ� ã�� ������ �ε����� ����ϴ� ���α׷��� �ۼ��϶�
               ���� ���� ���� ���Ҹ� ã�� �� ������ ���� �޽����� ����ϰ�, ���� ���� ���� ���Ұ� ���� ���� ���� ù ��°�� ã�� ������ �ε����� ����Ѵ�
               �迭�� �ʱⰪ�� ������� ���϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
int find_arr(int arr[], int size, int value);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int value;

    printf("�迭: ");

    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nã�� ��? ");
    scanf("%d", &value);

    int index = find_arr(arr, ARR_SIZE, value);

    if (index == -1)
    {
        printf("�ش� ���� ã�� �� �����ϴ�.");
    }
    else
    {
        printf("%d�� %d��° �����Դϴ�.", value, index);
    }
}

int find_arr(int arr[], int size, int value)
{
    int i;
    for (i = size - 1; i >= 0; i--)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }

    return -1;
}

