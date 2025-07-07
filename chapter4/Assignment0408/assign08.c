/* 파일명: assign08.c

 * 내용: PA08. 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하라, 이때 파이는 3.141592라고 한다

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.141592
#include <stdio.h>
#include <math.h>

void Sphere(void);

int main()
{
    Sphere();
    return 0;
}

void Sphere(void)
{
    int radius;

    printf("반지름의 길이? ");
    scanf("%d", &radius);

    double volume = (4.0 / 3.0) * Pi * pow(radius, 3);

    printf("구의 부피 : %lf", volume);
}