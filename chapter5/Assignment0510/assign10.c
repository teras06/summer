/* 파일명: assign10.c

 * 내용: PA10. 핸드폰 요금 계산서에 보면 "10원 미만 절사" 같은 표현을 볼 수 있다, 예를 들어 요금이 12345원이면 실제 청구액은 12340원이 되는 것이다
               금액과 절사단위를 입력받아 절사 기능을 처리하는 프로그램을 작성하라 
               절사 단위는 10의 제곱수로 입력받아야 한다, 예를 들어 100원 미만 절사를 하려면 절사 단위로 2를 입력받는다

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Print(void);
int Truncation(int money, int base);

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    int money, unit;

    printf("금액? ");
    scanf("%d", &money);
    printf("절사단위 (10의 지수승)? ");
    scanf("%d", &unit);

    if (unit == 0)
    {
        printf("금액(미 절사): %d", money);
    }
    else
    {
        int base = (int)pow(10, unit);
        int result = Truncation(money, base);

        printf("금액(%d 미만 절사): %d", base, result);
    }
}

int Truncation(int money, int base)
{
    return money / base * base;
}