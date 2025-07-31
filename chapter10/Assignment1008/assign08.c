/* 파일명: assign08.c

 * 내용: PA08. 피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하라 각 제품별로 제품명, 가격, 재고를 저장할 수 있어야 한다
               PRODUCT 구조체를 매개변수로 전달받아 제품 정보를 출력하는 print_product 함수를 정의하라
               PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하라
               참고로 제품명은 빈칸 없는 한 단어로 입력한다.

 * 작성자: 김영재

 * 날짜: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct product
{
    char name[20];
    int price;
    int inven;

} PRODUCT;

void print_product(PRODUCT a);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    PRODUCT a;

    printf("제품명? ");
    scanf("%s", a.name);
    printf("가격? ");
    scanf("%d", &a.price);
    printf("재고? ");
    scanf("%d", &a.inven);

    print_product(a);
}

void print_product(PRODUCT a)
{
    printf("[%s %d원 재고:%d]", a.name, a.price, a.inven);
}