/* 파일명: assign11.c

 * 내용: PA11. 제품의 가격과 할인율(%)을 입력받아서 할인가와 에누리 금액을 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Discount(void);

int main()
{
	Discount();
	return 0;
}

void Discount(void)
{
	int price, overcharge, discount_price; //가격, 에누리, 할인가
	double discount; //할인율

	printf("제품의 가격? ");
	scanf("%d", &price);
	printf("할인율(%%)? ");
	scanf("%lf", &discount);

	overcharge = price * discount / 100;

	discount_price = price - overcharge;

	printf("할인가: %d(%d원 할인)", discount_price, overcharge);
}