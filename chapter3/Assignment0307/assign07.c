#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Square(void);

int main()
{
	Square();
	return 0;
}

void Square(void)
{
	double num;

	printf("½Ç¼ö? ");
	scanf("%lf", &num);

	printf("Á¦°ö: %e\n", num * num);
	printf("¼¼Á¦°ö: %e", num * num * num);

	return;
}