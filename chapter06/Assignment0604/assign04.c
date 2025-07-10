/* 파일명: assign04.c

 * 내용: PA04. 제품의 가격과 할인율 인자로 받아서 할인가를 리턴하는 discount_price 함수를 정의하라 
               discount_price 함수를 이용해서 판매되는 제품에 대해서 동일한 할인율을 적용해서 할인가를 구하는 프로그램을 작성하라 
               할인율을 먼저 입력받은 다음, 반복적으로 입력된 제품의 가격에 대하여 할인가를 구해서 출력하며, 
               제품의 가격으로 0이 입력되면 프로그램을 종료한다

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
double discount_price(double price, double discount_rate);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double price, discount_rate;

    printf("할인율(%%)? ");
    scanf("%lf", &discount_rate);

    discount_rate = discount_rate / 100;

    while (1)
    {
        printf("제품의 가격? ");
        scanf("%lf", &price);

        if (price == 0)
        {
            return;
        }
        else
        {
            printf("할인가: %.0f원\n", discount_price(price, discount_rate));
        }
    }
}

double discount_price(double price, double discount_rate)
{
    return price - (price * discount_rate);
}