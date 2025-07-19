/* 파일명: assign03.c

 * 내용: PA03. 배열 원소를 가리키는 포인터가 배열의 첫 번째 원소를 가리킬 때 포인터 연산을 이용해서 정수형 배열의 모든 원소를 순서대로 출력한다
               그 다음, 포인터가 배열의 마지막 원소를 가리키게 하고, 배열의 원소를 역순으로 출력하는 프로그램을 작성하라
               정수형 배열은 크기가 10이고 마음대로 초기화해서 사용하라


 * 작성자: 김영재

 * 날짜: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
	int arr[] = { 44, 32, 65, 23, 45, 76, 77, 89, 23, 45 };

	int* p = &arr[0];
	printf("배열:");

	int i;
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", *(p + i));
	}

	p = &arr[9];

	printf("\n역순:");
	for (i = 0; i < 10; i++)
	{
        printf(" %d ", *(p - i));
	}	
}