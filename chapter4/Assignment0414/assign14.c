/* 파일명: assign14.c

 * 내용: PA14. 기본 요금과 월 사용량(kWh)을 입력받아 전기 요금을 계산하는 프로그램을 작성하라, 사용량에 따른 요금은 190원/hWh이다

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ElectricityBill(void);

int main()
{
	ElectricityBill();
	return 0;
}

void ElectricityBill(void)
{
	int bill, Ebill, amount;

	printf("기본 요금? ");
	scanf("%d", &bill);
	printf("월 사용량(kWh)? ");
	scanf("%d", &amount);

	Ebill = bill + amount * 190;

	printf("전기 요금: %d원", Ebill);
}