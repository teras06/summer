/* 파일명: assign10.c

 * 내용: PA10. 항공권 예약 시 여정의 총 소요시간을 시간 단위로 입력받아 며칠 몇 시간 몇 분인지 출력하는 프로그램을 작성하라, 총 소요시간은 실수로 입력받는다
               예) 소요시간 10.5 시간 = 10시간 30분

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void FlightTime(void);

int main()
{
	FlightTime();
	return 0;
}

void FlightTime(void)
{
	double total;
	int day, hour, minute;

	printf("비행 소요시간(시간)? ");
	scanf("%lf", &total);

	day = (int)total / 24;

	hour = (int)total % 24;

	minute = (int)((total - (int)total) * 60);

	printf("비행 소요시간은 %d일 %d시간 %d분입니다.", day, hour, minute);
}