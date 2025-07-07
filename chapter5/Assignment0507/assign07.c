/* 파일명: assign07.c

 * 내용: PA07. 전기 요금은 기본 요금과 월 사용량에 의한 요금으로 계산되는데, 실제로는 누진세가 적용되어 단계별로 적용되는 기본 요금과 월 사용량 요금이 달라진다
               다음의 누진세 요금표를 참고한여 월 사용량을 입력받아 전기 요금을 계산하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ElectricityBill(void);

int main() {
    ElectricityBill();
    return 0;
}

void ElectricityBill(void) 
{
    int usage, baseCharge;       
    double energyCharge, total;

    printf("월 사용량(kWh)? ");
    scanf("%d", &usage);

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

    printf("전기요금 합계: %.0f원\n", total);
    printf("   - 기본요금:  %d원\n", baseCharge);
    printf(" - 전력량요금: %.0f원", energyCharge);
}