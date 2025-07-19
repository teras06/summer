/* ���ϸ�: assign04.c

 * ����: PA04. �迭 ���Ҹ� ����Ű�� �����͸� �̿��ؼ� �Ǽ��� �迭�� ����� ���ϴ� ���α׷��� �ۼ��϶�
               �Ǽ��� �迭�� ũ�Ⱑ 10�̰� ������� �ʱ�ȭ�ؼ� ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
double average(double* arr, int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };

    int i;

    printf("�迭: ");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f ", *(arr + i));
    }

    double avg = average(arr, 10);
    printf("\n���: %f", avg);
}

double average(double* arr, int size)
{
    double sum = 0.0;

    int i;
    for (i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum / size;
}