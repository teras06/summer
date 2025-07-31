/* ���ϸ�: assign14.c

 * ����: PA14. ������ �迭�� 1~(N-1)������ ������ ������ ä���ִ� rand_array �Լ��� �ۼ��϶� 
               rand_array �Լ��� �̿��ϸ� ������ ���� 1���� ������ ���� �ְ� �迭 ũ�⸸ŭ ������ ���� �ִ� 
               �� �Լ��� 0~9������ ���� ������ count ������ ������ ����, count����ŭ ũ�Ⱑ 10�� int �迭�� 0~99������ ������ ������ ä��� ����ϴ� ���α׷��� �ۼ��϶�

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

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    srand((unsigned)time(NULL));

    int count;
    rand_array(&count, 1, 10);

    printf("count = %d\n", count);

    int arr[ARR_SIZE];

    int i, j;
    for (i = 0; i < count; i++)
    {
        rand_array(arr, ARR_SIZE, 100);

        for (j = 0; j < ARR_SIZE; j++)
        {
            printf("%2d ", *(arr + j));
        }
        printf("\n");
    }
}

void rand_array(int* arr, int size, int max_val)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % max_val;
    }
}