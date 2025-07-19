/* ���ϸ�: assign06.c

 * ����: PA06. ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ밪�� �ּҰ��� ã�� get_min_max �Լ��� �����϶�
               ũ�Ⱑ 10�� int �迭�� ���ؼ� ���ϴ� ������ �ʱⰪ�� ä�� ���� get_min_max �Լ��� �ִ밪�� �ּҰ��� ã�Ƽ� ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
void find_MinMax(int *arr, int size, int* max, int* min);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int max, min;

    printf("�迭: ");

    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    find_MinMax(arr, ARR_SIZE, &max, &min);

    printf("\n�ִ�: %d\n", max);
    printf("�ּڰ�: %d\n", min);
}

void find_MinMax(int *arr, int size, int* max, int* min)
{
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = *(arr + i);
        }
        if (arr[i] < *min)
        {
            *min = *(arr + i);
        }
    }
}