#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print_pi(void);

int main()
{
	Print_pi();
	return 0;
}

void Print_pi(void)
{
	double pi = 3.14159265;

	printf("pi = %.2lf\n", pi);
	printf("pi = %.4lf\n", pi);
	printf("pi = %.6lf\n", pi);
	printf("pi = %.8lf\n", pi);
	printf("pi = %e", pi);

	return;
}