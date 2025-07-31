/* 파일명: assign10.c

 * 내용: PA10. PRODUCT 구조체를 이용해서 최대 5개의 제품 정보를 입력받아 저장하고 출력하는 프로그램을 작성하라 
               제품명으로 "."가 입력되거나 5개의 제품 정보를 모두 입력하면, 지금까지 입력된 제품 정보를 출력하고 종료한다

 * 작성자: 김영재

 * 날짜: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct product
{
    char name[20];
    int price;
    int inven;

} PRODUCT;

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    PRODUCT a[5];
    int count = 0;

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("제품명? ");
        scanf("%s", a[i].name);

        if (strcmp(a[i].name, ".") == 0)
        {
            break;
        }

        printf("가격 재고? ");
        scanf("%d %d", &a[i].price, &a[i].inven);
        count++;
    }

    if (count == 0)
    {
        printf("입력된 제품 정보가 없습니다.\n");
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            printf("[%s %d원 재고:%d]\n", a[i].name, a[i].price, a[i].inven);
        }
    }


}