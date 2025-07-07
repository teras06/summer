/* 파일명: assign05.c

 * 내용: PA05. 반지름과 높이를 입력받아 원기둥의 부피를 구하는 프로그램을 작성하라, 이때 파이는 3.141592라고 한다

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.141592
#include <stdio.h>

void Volume(void);

int main()
{
	Volume();
	return 0;
}


void Volume(void)
{
	int length, height;

	printf("반지름의 길이? ");
	scanf("%d", &length);
	printf("높이? ");
	scanf("%d", &height);

	double volume = Pi * length * length * height;

	printf("원기둥의 부피: %.6lf", volume);
}