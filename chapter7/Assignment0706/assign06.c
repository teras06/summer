/* ���ϸ�: assign06.c

 * ����: PA06. ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��϶�
               �Ǽ��� �迭�� �ʱⰪ�� ������� ���϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void reverse_arr(double arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double arr[] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("�迭: ");

    int i;
    for (i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }

    reverse_arr(arr, size);

    printf("\n����: ");

    for (i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }
}

void reverse_arr(double arr[], int size)
{
    double temp;

    int i;
    for (i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}