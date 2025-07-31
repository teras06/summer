/* 파일명: assign12.c

 * 내용: PA12. 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장해서 리턴하는 find_all_in_array 함수를 작성하라
               이 함수는 찾은 항목의 개수를 리턴한다, 예를 들어 배열에서 12를 2개 찾았으면 2를 리턴하고 찾은 항목의 인덱스는 매개변수인 인덱스 배열에 저장한다
               만일 항목을 찾을 수 없으면 0을 리턴한다

 * 작성자: 김영재

 * 날짜: 2025.07.22
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int find_all_in_array(int* arr, int key, int size, int* index_arr);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 23 };
    int index_arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;


    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("찾을 값? ");
    scanf("%d", &key);

    int count = find_all_in_array(arr, key, size, index_arr);

    if (count == 0)
    {
        printf("%d는 없습니다\n", key);
    }
    else
    {
        printf("찾은 항목은 모두 %d개 입니다.\n", count);
        printf("찾은 항목의 인덱스: ");

        for (int i = 0; i < count; i++)
        {
            printf("%d ", *(index_arr + i));
        }
        printf("\n");
    }
}

int find_all_in_array(int* arr, int key, int size, int* index_arr)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == key)
        {
            *(index_arr + count) = i;
            count++;
        }
    }

    return count;
}