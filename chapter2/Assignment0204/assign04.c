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

	printf("��? ");
	scanf("%d", &hour);

	printf("��? ");
	scanf("%d", &minute);

	printf("��? ");
	scanf("%d", &second);

	printf("�Է��� �ð��� %02d:%02d:%02d�Դϴ�.", hour, minute, second);

	return;
}