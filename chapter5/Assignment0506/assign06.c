/* 파일명: assign06.c

 * 내용: PA06. 면적을 입력받아 평은 제곱미터로, 제곱미터는 평으로 변환하는 프로그램을 작성하라 
               "50 р" 또는 "50 m"처럼 면적을 입력받을 때, 평인지 제곱미터인지 구분할 수 있는 문자를 함께 입력받는다 
               함께 입력된 문자가 'p'면 평이므로 제곱미터를 구해서 출력하고, 입력된 문자가 'm'면 제곱미터이므로 평을 구해서 출력한다 
               1m²는 0.3025평에 해당하고, 1평은 3.305785m²에 해당한다

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ExtentConversion();

int main(void)
{
    ExtentConversion();
    return 0;
}

void ExtentConversion(void)
{
    double extent;
    char unit;

    printf("넚이? ");
    scanf("%lf %c", &extent, &unit);

    if (unit == 'm')
    {
        double p = extent * 0.3025;
        printf("%.2f 제곱미터 == %.2f 평", extent, p);
    }
    else if (unit == 'p')
    {
        double m = extent * 3.305785;
        printf("%.2f 평 == %.2f 제곱미터", extent, m);
    }
    else
    {
        printf("잘못 입력하셨습니다");
    }
}