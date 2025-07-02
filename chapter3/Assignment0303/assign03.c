#define _CRT_SECURE_NO_WARNINGS
#define G 9.8
#include<stdio.h>

void PEnergy(void);
double calcPEnergy(int a, int b);

int main()
{
	PEnergy();
	return 0;
}

void PEnergy(void)
{
	double wei, hei;

	printf("질량(kg)? ");
	scanf("%lf", &wei);
	printf("높이(m)? ");
	scanf("%lf", &hei);

	calcPEnergy(wei, hei);

	printf("위치에너지: %f J", calcPEnergy(wei, hei));

	return;
}

double calcPEnergy(int a, int b)
{
	return a * b * G;
}