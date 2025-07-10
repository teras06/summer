/* 파일명: assign18.c

 * 내용: PA18. 17번의 주차 요금 정산 프로그램을 주차 시간에 0이 입력될 때까지 반복 수행되도록 수정하라

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

    while (1)
    {
        printf("주차 시간(분)? ");
        scanf("%d", &minute);

        if (minute <= -1)
        {
            printf("잘못된 입력입니다.\n");
            continue;
        }

        if (minute == 0)
        {
            return;
        }

        if (minute > 1440)
        {
            printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
            continue;
        }

        if (minute <= 30)
        {
            charge = 2000;
        }
        else
        {
            charge = 2000 + ((minute - 30 + 9) / 10) * 1000;

            if (charge > 25000)
                charge = 25000;
        }

        printf("주차 요금: %d원\n", charge);
    }
}