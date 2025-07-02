#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Inch(void);

int main()
{
	Inch();
	return 0;
}

void Inch(void)
{
	double inch;

	printf("±Ê¿Ã(inch)? ");
	scanf("%lf", &inch);

	printf("%.6f inch = %.6f cm", inch, inch * 2.54);

	return;
}