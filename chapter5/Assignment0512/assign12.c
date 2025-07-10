/* 파일명: assign12.c

 * 내용: PA12. 원금과 연 이율을 입력받아 1~10년 동안 연복리로 이자를 구해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Compound(void);

int main()
{
    Compound();
    return 0;
}

void Compound(void)
{
    int principal; //원금
    double apr; //연이율

    printf("원금? ");
    scanf("%d", &principal);
    printf("연이율(%%)? ");
    scanf("%lf", &apr);

    apr = apr / 100.0;
    double compound = principal; // 원리합계

    int i;

    for (i = 1;i < 11;i++)
    {
        double interest = compound * apr; //이자
        compound += interest;

        printf("%2d년째 이자 %.2f, 원리합계: %.2f\n", i, interest, compound);
    }
}