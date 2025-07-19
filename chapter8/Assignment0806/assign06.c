/* 파일명: assign06.c

 * 내용: PA06. 정수형 배열에 대하여 배열의 원소 중 최대값과 최소값을 찾는 get_min_max 함수를 정의하라
               크기가 10인 int 배열에 대해서 원하는 값으로 초기값을 채운 다음 get_min_max 함수로 최대값과 최소값을 찾아서 출력하라

 * 작성자: 김영재

 * 날짜: 2025.07.19
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

    printf("배열: ");

    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    find_MinMax(arr, ARR_SIZE, &max, &min);

    printf("\n최댓값: %d\n", max);
    printf("최솟값: %d\n", min);
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