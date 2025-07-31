/* 파일명: assign16.c

 * 내용: PA16. 14번의 sort_array 함수에 정렬 순서를 지정하는 매개변수를 추가해서 오름차순 정렬과 내림차순 정렬을 
               모두 처리할 수 있는 sort_array_with_order 함수로 정의하라
               크기가 10인 int 배열에 0~99사이의 임의의 정수를 채운 다음 sort_array_with_order 함수로 
               오름차순 정렬 결과와 내림차순 정렬 결과를 모두 출력하는 프로그램을 작성하라


 * 작성자: 김영재

 * 날짜: 2025.07.22
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

    printf("정렬 전         : ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%2d ", *(arr + i));
    }
    printf("\n");

    sort_array_with_order(arr, ARR_SIZE, ASCENDING);

    printf("오름차순 정렬 후: ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%2d ", *(arr + i));
    }
    printf("\n");

    sort_array_with_order(arr, ARR_SIZE, DESCENDING);

    printf("내림차순 정렬 후: ");
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
            if ((order == 0 && *(arr + j) < *(arr + idx)) || //오름차순
                (order == 1 && *(arr + j) > *(arr + idx))) //내림차순
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