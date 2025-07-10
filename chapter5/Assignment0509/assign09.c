/* 파일명: assign09.c

 * 내용: PA09. 햄버거 가게의 계산서 프로그램을 작성하라 햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원이고,
               세 가지를 세트로 주문하면 6500원이라고 하자. 햄버거, 콜라, 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고
               나머지는 단품으로 계산하도록 한다. 예를 들어 햄버거 2, 콜 라 1, 감자튀김 3을 주문하면
               계산은 세트 1, 햄버거 1, 감자튀김 2로 해야 한다.

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Bill(void);

int main(void)
{
    Bill();
    return 0;
}

void Bill(void)
{
    int ham, fry, cola, set, total;

    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

    printf("햄버거 개수? ");
    scanf("%d", &ham);
    printf("감자튀김 개수? ");
    scanf("%d", &fry);
    printf("콜라 개수? ");
    scanf("%d", &cola);


    set = ham;
    if (fry < set) set = fry;
    if (cola < set) set = cola;


    ham -= set;
    fry -= set;
    cola -= set;


    total = set * 6500 + ham * 4000 + fry * 2000 + cola * 1500;


    printf("\n상품명       단가    수량    금액\n");
    if (set > 0) {
        printf("%-10s %6d %6d %8d\n", "세트", 6500, set, set * 6500);
    }
    if (ham > 0) {
        printf("%-10s %6d %6d %8d\n", "햄버거", 4000, ham, ham * 4000);
    }
    if (fry > 0) {
        printf("%-10s %6d %6d %8d\n", "감자튀김", 2000, fry, fry * 2000);
    }
    if (cola > 0) {
        printf("%-10s %6d %6d %8d\n", "콜라", 1500, cola, cola * 1500);
    }

    printf("--------------------------------------\n");
    printf("합계%29d", total);
}