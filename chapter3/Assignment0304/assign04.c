#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Work(void);

int main()
{
	Work();
	return 0;
}

void Work(void)
{
	double power, len;

	printf("힘(N)? ");
	scanf("%lf", &power);
	printf("이동거리(M)? ");
	scanf("%lf", &len);

	printf("일의 양: %.2lf J", power * len);
	return;
}