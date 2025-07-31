/* ���ϸ�: assign15.c

 * ����: PA15. 7���� ���� ���� �ڵ带 �̿��ؼ� ������ �迭�� �����ϴ� sort_array �Լ��� �����϶�
               ũ�Ⱑ 10�� int �迭�� 0~99������ ������ ������ ä�� ���� sort_array �Լ��� ������ ����� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.22
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(void);
void rand_array(int* arr, int size, int max_val);
void sort_array(int* arr, int size);

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

    printf("���� ��: ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%2d ", *(arr + i));
    }
    printf("\n");

    sort_array(arr, ARR_SIZE);

    printf("���� ��: ");
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

void sort_array(int* arr, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        int min_idx = i; //�ּҰ� �ε���

        for (j = i + 1; j < size; j++) ///arr[j] = arr[i+1]
        {
            if (*(arr + j) < *(arr + min_idx)) //arr[j]�� arr[min_idx]���� �������
            { 
                min_idx = j; //arr[j] = arr[min_idx]
            }
        }

        if (min_idx != i) //arr[j] < arr[i] �̹Ƿ� ���� ��ġ����
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + min_idx);
            *(arr + min_idx) = temp;
        }
    }
}