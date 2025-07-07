/* 파일명: assign09.c

 * 내용: PA09. 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Time(void);

int main()
{
	Time();
	return 0;
}

void Time(void)
{
	int total, hour, minute, second;

	printf("재생시간(초)? ");
	scanf("%d", &total);

	hour = total / 3600;

	minute = (total % 3600) / 60;

	second = total % 60;

	printf("재생시간은 %d시간 %d분 %d초입니다.", hour, minute, second);
}