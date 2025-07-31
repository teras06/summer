/* ���ϸ�: assign16.c

 * ����: PA16. 14���� sort_array �Լ��� ���� ������ �����ϴ� �Ű������� �߰��ؼ� �������� ���İ� �������� ������ 
               ��� ó���� �� �ִ� sort_array_with_order �Լ��� �����϶�
               ũ�Ⱑ 10�� int �迭�� 0~99������ ������ ������ ä�� ���� sort_array_with_order �Լ��� 
               �������� ���� ����� �������� ���� ����� ��� ����ϴ� ���α׷��� �ۼ��϶�


 * �ۼ���: �迵��

 * ��¥: 2025.07.22
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#define ASCENDING 0
#define DESCENDING 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(void);
void rand_array(int* arr, int size, int max_val);
void sort_array_with_order(int* arr, int size, int order);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE];
    srand((unsigned)time(NULL));

    rand_array(arr, ARR_SIZE, 100);

    printf("���� ��         : ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%2d ", *(arr + i));
    }
    printf("\n");

    sort_array_with_order(arr, ARR_SIZE, ASCENDING);

    printf("�������� ���� ��: ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%2d ", *(arr + i));
    }
    printf("\n");

    sort_array_with_order(arr, ARR_SIZE, DESCENDING);

    printf("�������� ���� ��: ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%2d ", *(arr + i));
    }
}

void rand_array(int* arr, int size, int max_val)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % max_val;
    }
}

void sort_array_with_order(int* arr, int size, int order)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        int idx = i;

        for (j = i + 1; j < size; j++)
        {
            if ((order == 0 && *(arr + j) < *(arr + idx)) || //��������
                (order == 1 && *(arr + j) > *(arr + idx))) //��������
            {
                idx = j;
            }
        }

        if (idx != i)
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + idx);
            *(arr + idx) = temp;
        }
    }
}