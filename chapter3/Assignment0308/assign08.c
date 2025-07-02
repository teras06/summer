#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Yd(void);

int main()
{
	Yd();
	return 0;
}

void Yd(void)
{
	int yd;

	printf("±Ê¿Ã(yd)? ");
	scanf("%d", &yd);

	printf("%d yd = %.6f m", yd, yd * 0.9144);

	return;
}