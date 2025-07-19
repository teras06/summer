/* 파일명: assign08.c

 * 내용: PA08. 상품 가격이 저장된 정수형 배열에 대하여 할인율(%)을 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하라
               상품 가격이 저장된 배열의 크기는 5이고, 상품 가격은 입력받아서 사용한다
               할인된 가격은 별도의 배열에 저장해야 한다

 * 작성자: 김영재

 * 날짜: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5
#include <stdio.h>

void Print(void);
void discount_arr(int discount[], int arr[], int discount_rate, int size);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int discount_rate;
	int arr[ARR_SIZE];
	int discount[ARR_SIZE];

	printf("상품가 5개를 입력하세요:\n");

	int i;
	for (i = 0; i < ARR_SIZE; i++) 
	{
		scanf("%d", &arr[i]);
	}

	printf("할인율(%%)? ");
	scanf("%d", &discount_rate);

	discount_arr(discount, arr, discount_rate, ARR_SIZE);

	for (i = 0; i < ARR_SIZE; i++) 
	{
		printf("가격:%7d --> 할인가:%7d\n", arr[i], discount[i]);
	}
}

void discount_arr(int discount[], int arr[], int discount_rate, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		discount[i] = (arr[i] / 100) * (100 - discount_rate);
	}
}


