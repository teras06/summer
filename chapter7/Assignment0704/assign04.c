/* ���ϸ�: assign04.c

 * ����: PA04. Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ밪�� ���� ���ҿ� �ּҰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��϶�
               �迭�� �ʱⰪ�� ������� ���϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
void find_MinMax(int arr[], int size, int* max, int* min, int* maxidx, int* minidx);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int max, min, maxidx, minidx;

    printf("�迭: ");

    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    find_MinMax(arr, ARR_SIZE, &max, &min, &maxidx, &minidx);

    printf("\n�ִ�: �ε��� = %d, �� = %d\n", maxidx, max);
    printf("�ּڰ�: �ε��� = %d, �� = %d\n", minidx, min);
}

void find_MinMax(int arr[], int size, int* max, int* min, int* maxidx, int* minidx)
{
    *max = arr[0];
    *min = arr[0];
    *maxidx = 0;
    *minidx = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
            *maxidx = i;
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
            *minidx = i;
        }
    }
}