/* 파일명: assign05.c

 * 내용: PA04. 인자로 전달받은 정수가 짝수인지 검사하는 is_even 함수와 홀수인지 검사하는 is_odd 함수를 작성하라 
               두 함수를 이용해서 0이 입력될 때까지 입력된 정수들에 대해서 짝수의 개수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void is_even(int x);
void in_oss(int y);

int even = 0;
int odd = 0;

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	while (1)
	{
		int i;

		scanf("%d", &i);

		if (i == 0)
			break;

		is_even(i);
		in_oss(i);
	}
	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개 입니다.", even, odd);
}

void is_even(int x)
{
	if (x % 2 == 0)
	{
		even = even + 1;
	}
}


void in_oss(int y)
{
	if (y % 2 == 1)
	{
		odd = odd + 1;
	}
}