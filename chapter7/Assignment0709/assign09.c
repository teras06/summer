/* 파일명: assign09.c

 * 내용: PA09. 1~12월의 핸드폰 요금을 배열에 저장하고 화면에 막대 그래프로 출력하는 프로그램을 작성하라
               12개월의 핸드폰 요금이 들어있는 배열을 특정 값으로 초기화해서 사용하고, 핸드폰 요금 2000원 당 '*'를 하나씩 막대 그래프로 출력한다.

 * 작성자: 김영재

 * 날짜: 2025.07.15
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
    int arr[12] = { 36000, 42000, 38000, 23000, 96000, 67000, 51000, 20000, 79000, 28000, 82000, 65000 };

	int i, j;
	for (i = 0; i < 12; i++) 
	{
		printf("%2d월 %d:", i + 1, arr[i]);

		for (j = 0; j < arr[i] / 2000; j++)
		{
	    printf("*");
        }

        printf("\n");
	}
}


