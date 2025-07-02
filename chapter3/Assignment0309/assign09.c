#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Lb(void);

int main()
{
	Lb();
	return 0;
}

void Lb(void)
{
	int ld;

	printf("¹«°Ô(lb)? ");
	scanf("%d", &ld);

	printf("%d ld = %.6f kg", ld, ld * 0.45359237);

	return;
}