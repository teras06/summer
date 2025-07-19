/* 파일명: assign09.c

 * 내용: PA09. 열 크기가 5인 2차원 int 배열의 모든 원소를 특정 값으로 채우는 fill_2d_array 함수를 작성하라
               함수의 매개변수로 배열 전체에 대한 포인터와 배열의 행 크기를 전달한다
               열 크기가 5, 행 크기가 4인 2차원 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#define ROWS 4
#define COLS 5
#include <stdio.h>

void Print(void);
void fill_2d_array(int (*arr)[COLS], int rows, int value);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[ROWS][COLS];
	int value;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &value);

	fill_2d_array(arr, ROWS, value);

	int i, j;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void fill_2d_array(int (*arr)[COLS], int rows, int value)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			arr[i][j] = value;
		}
	}
}