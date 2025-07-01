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
	int hour, minute, second; 

	printf("시? ");
	scanf("%d", &hour);

	printf("분? ");
	scanf("%d", &minute);

	printf("초? ");
	scanf("%d", &second);

	printf("입력한 시간은 %02d:%02d:%02d입니다.", hour, minute, second);

	return;
}