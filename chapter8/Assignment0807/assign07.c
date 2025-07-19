/* ���ϸ�: assign07.c

 * ����: PA07. �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� reverse_array �Լ��� �ۼ��϶�
               ũ�Ⱑ 10�� double �迭�� ���ؼ� ���ϴ� ������ �ʱⰪ�� ä�� ���� reverse_array �Լ��� ȣ�� ����� Ȯ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void reverse_array(double *arr, int size);

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

    reverse_array(arr, size);

    printf("\n����: ");

    for (i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }
}

void reverse_array(double* arr, int size)
{
    double* first = arr;
    double* last = arr + size - 1;
    double temp;

    while (first < last)
    {
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
    }
}