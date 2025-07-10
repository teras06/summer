/* 파일명: assign14.c

 * 내용: PA14. 고속도로dml 과속 단속 방법 중 하나인 구간 단속은 구간 단속 시작 지점부터 종료 지점까지의 소요 시간과 거리를 이용해서 
               평균 주행 속력을 구하고 이 값으로 속도 위반 여부를 판단하는 방식이다 
               구간 단속 시작 지점에서 종료 지점까지의 소요 시간을 분으로 입력 받고 주행거리를 km로 입력받아서 
               평균 속력이 100km/h 이상이면 과속이 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
double Speeding(int time, int distance);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int time, distance;

    printf("구간 단속 소요 시간 (분)? ");
    scanf("%d", &time);
    printf("구간 단속 주행 거리 (KM)? ");
    scanf("%d", &distance);

    double speed = Speeding(time, distance);

    if (speed >= 100)
    {
        printf("평균 속력은 %.1f KM/h입니다. 구간 단속 과속입니다.", speed);
    }
    else
    {
        printf("평균 속력은 %.1f KM/h입니다. 문제 없습니다.", speed);
    }
    
}

double Speeding(int time, int distance)
{
    return distance / (time / 60.0);
}