/* 파일명: assign16.c

 * 내용: PA16. 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 찾아 인덱스를 리턴하는 find_array 함수를 작성하라
               만일 키 값을 찾을 수 없으면 -1을 리턴한다

 * 작성자: 김영재

 * 날짜: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int fine_arr(int arr[], int key, int size);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	int key;

	printf("찾을 값? ");
	scanf("%d", &key);

	int result = fine_arr(arr, key, size);

	if (result == -1)
	{
		printf("%d는 없습니다", key);
	}
	else
	{
		printf("%d는 %d번째 원소입니다", key, result);
	}
}

int fine_arr(int arr[], int key, int size) 
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (key == arr[i]) 
		{
			return i;
		}
	}

	return -1;
}