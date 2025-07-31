/* 파일명: assign14.c

 * 내용: PA14. 정수형 배열을 1~(N-1)사이의 임의의 정수로 채워주는 rand_array 함수를 작성하라 
               rand_array 함수를 이용하면 임의의 정수 1개를 생성할 수도 있고 배열 크기만큼 생성할 수도 있다 
               이 함수로 0~9사이의 값을 생성해 count 변수에 저장한 다음, count번만큼 크기가 10인 int 배열에 0~99사이의 임의의 정수를 채우고 출력하는 프로그램을 작성하라

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