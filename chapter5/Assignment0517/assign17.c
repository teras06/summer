/* 파일명: assign17.c

 * 내용: PA17. 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하라 주차 요금은 최초 30분은 2000원, 
               그 이후는 10분당 1000원씩으로 계산하며, 하루 최대 25000원을 넘을 수 없다, 주차 시간은 24시간을 넘을 수는 없다고 가정한다

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Parking();

int main(void)
{
    Parking();
    return 0;
}

void Parking(void)
{
    int minute, charge;

    printf("주차 시간(분)? ");
    scanf("%d", &minute);

    if (minute <= 0)
    {
        printf("잘못된 입력입니다.\n");
        return;
    }

    if (minute <= 30)
    {
        charge = 2000;
    }
    else if (minute > 1440)
    {
        printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.");
        return;
    }
    else
    {
        charge = 2000 + ((minute - 30 + 9) / 10) * 1000;

        if (charge > 25000)
            charge = 25000;
    }

    printf("주차 요금: %d원", charge);
}