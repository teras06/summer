/* 파일명: assign08.c

 * 내용: PA08. 정수형 배열을 특정 값으로 채우는 fill_array 함수를 작성하라 단, 포인터와 포인터 역참조 연산자를 이용한다
               fill_array 함수를 이용해서 크기가 20인 int 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.19
 */


#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 20
#include <stdio.h>

void Print(void);
void fill_array(int *arr, int size, int value);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[ARR_SIZE];
	int value;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &value);

	fill_array(arr, ARR_SIZE, value);

	int i;
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", *(arr + i));
	}
}

void fill_array(int *arr, int size, int value)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(arr + i) = value;
	}
}