/* 파일명: assign20.c

 * 내용: PA20. 인자로 전달된 월 사용량으로 전기 요금을 계산하는 electric_charge 함수를 작성하라 
               전기 요금은 기본 요금과 월 사용량에 의한 전력량 요금으로 계산된다 
               누진제 요금표 참고하여 단계별로 적용되는 기본 요금과 전력량 요금을 계산하라 
               함수를 이용해서 월 사용량을 입력받아 전기 요금을 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int electric_charge(int usage);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int usage;

    while (1)
    {
        printf("월 사용량 (kMh)? ");
        scanf("%d", &usage);

        if (usage < 0)
        {
            break;
        }

        int charge = electric_charge(usage);

        printf("전기요금:%8d원\n", charge);
    }
}

int electric_charge(int usage)
{
    int baseCharge; //기본요금
    double energyCharge, total; ///전력량요금, 전기 요금

    if (usage <= 200)
    {
        baseCharge = 910;
    }
    else if (usage <= 400)
    {
        baseCharge = 1600;
    }
    else
    {
        baseCharge = 7300;
    }


    if (usage <= 200)
    {
        energyCharge = usage * 93.3;
    }
    else if (usage <= 400)
    {
        energyCharge = (200 * 93.3) + ((usage - 200) * 187.9);
    }
    else
    {
        energyCharge = (200 * 93.3) + (200 * 187.9) + ((usage - 400) * 280.6);
    }

    total = baseCharge + energyCharge;

    return total;
}