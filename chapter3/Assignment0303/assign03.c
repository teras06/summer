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

	printf("����(kg)? ");
	scanf("%lf", &wei);
	printf("����(m)? ");
	scanf("%lf", &hei);

	calcPEnergy(wei, hei);

	printf("��ġ������: %f J", calcPEnergy(wei, hei));

	return;
}

double calcPEnergy(int a, int b)
{
	return a * b * G;
}