/* 파일명: assign15.c

 * 내용: PA15. 7장의 선택 정렬 코드를 이용해서 정수형 배열을 정렬하는 sort_array 함수를 정의하라
               크기가 10인 int 배열에 0~99사이의 임의의 정수를 채운 다음 sort_array 함수로 정렬한 결과를 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.22
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

    printf("정렬 전: ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%2d ", *(arr + i));
    }
    printf("\n");

    sort_array(arr, ARR_SIZE);

    printf("정렬 후: ");
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
        int min_idx = i; //최소값 인덱스

        for (j = i + 1; j < size; j++) ///arr[j] = arr[i+1]
        {
            if (*(arr + j) < *(arr + min_idx)) //arr[j]가 arr[min_idx]보다 작은경우
            { 
                min_idx = j; //arr[j] = arr[min_idx]
            }
        }

        if (min_idx != i) //arr[j] < arr[i] 이므로 서로 위치변경
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + min_idx);
            *(arr + min_idx) = temp;
        }
    }
}