/* 파일명: assign15.c

 * 내용: PA15. 아르바이트비를 계산하는 앱을 작성하라, 시급과 일일 근무 시간, 한 달 근무 일수, 세금 적용 여부를 입력받아 예상 월급이 얼마인지 출력하라 
               세금 적용 여부는 미적용, 4대보험 공제 8.41%, 소득세 공제 3.3% 중 하나를 선택할 수 있게 하라

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Alba(void);

int main()
{
    Alba();
    return 0;
}

void Alba(void)
{
    int hourly_rate, day, hour, duty; // 시급, 일일 근무 시간, 한달 근무 일수, 세금

    printf("시간당 급여? ");
    scanf("%d", &hourly_rate);
    printf("일일 근무 시간? ");
    scanf("%d", &hour);
    printf("한달 근무 일수? ");
    scanf("%d", &day);
    printf("세급 적용 여부 0:미적용, 1:4대보험공제(8.41%%), 2:소득세공제(3.3%%)? ");
    scanf("%d", &duty);

    double salary = hourly_rate * hour * day; // 월급

    switch (duty)
    {
    case 0:
        printf("예상 월급여: %.0f원", salary);
        break;
    case 1:
        printf("예상 월급여: %.0f원", salary - (salary * 0.0841));
        break;
    case 2:
        printf("예상 월급여: %.0f원", salary - (salary * 0.033));
        break;
    }
}
