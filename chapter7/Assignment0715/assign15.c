/* 파일명: assign15.c

 * 내용: PA15. 정수형 배열을 매개변수로 전달받아 배열 전체를 0으로 채우는 zero_array 함수를 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void zero_array(int arr[], int size);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);

	zero_array(arr, size);

	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void zero_array(int arr[], int size) 
{
	int i;

	for (i = 0; i < size; i++) 
	{
		arr[i] = 0;
	}
}