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

	printf("��(N)? ");
	scanf("%lf", &power);
	printf("�̵��Ÿ�(M)? ");
	scanf("%lf", &len);

	printf("���� ��: %.2lf J", power * len);
	return;
}