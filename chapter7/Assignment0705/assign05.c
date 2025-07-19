/* 파일명: assign05.c

 * 내용: PA05. 특정 값으로 초기화된 정수형 배열에 대하여 사용자가 입력한 값을 배열의 끝에서부터 역순으로 찾아서 찾은 원소의 인덱스를 출력하는 프로그램을 작성하라
               같은 값을 가진 원소를 찾을 수 없으면 에러 메시지를 출력하고, 같은 값을 가진 원소가 여러 개일 때는 첫 번째로 찾은 원소의 인덱스를 출력한다
               배열의 초기값은 마음대로 정하라

 * 작성자: 김영재

 * 날짜: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
int find_arr(int arr[], int size, int value);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int value;

    printf("배열: ");

    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n찾을 값? ");
    scanf("%d", &value);

    int index = find_arr(arr, ARR_SIZE, value);

    if (index == -1)
    {
        printf("해당 값을 찾을 수 없습니다.");
    }
    else
    {
        printf("%d는 %d번째 원소입니다.", value, index);
    }
}

int find_arr(int arr[], int size, int value)
{
    int i;
    for (i = size - 1; i >= 0; i--)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }

    return -1;
}

