/* 파일명: assign12.c

 * 내용: PA12. 내비게이션 앱에서 이동 거리와 예상 속력으로 도착 예정시간을 구하는 프로그램을 작성하라, 이동 거리는 Km 단위로, 예상 속력은 Km/h 단위로 입력받으며, 둘 다 실수로 입력받는다
			   예상 소요시간은 분 단위로 출력하며 정수로 출력하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ScheduledTime(void);

int main()
{
	ScheduledTime();
	return 0;
}

void ScheduledTime(void) //예정 시간
{
	double distance, speed;

	printf("이동 거리(km)? ");
	scanf("%lf", &distance);
	printf("예상 속력(km/h)? ");
	scanf("%lf", &speed);

	int time = (int)((distance / speed) * 60);

	printf("도착까지 예정 소요 시간은 %d분입니다.", time);
}