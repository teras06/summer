/* 파일명: assign11.c

 * 내용: PA11. 연산자와 2 개의 피연산자를 인자로 받아가서 사칙연산을 수행하는 calculator 함수를 작성하라 이때 연산자는 문자로 받아오고 피연산자는 실수로 받아온다 
               이 함수를 이용해서 "0 0 0"이 입력될 때까지 사칙연산의 결과를 구해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.13
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calculator(double a, char b, double c);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double a, c;
    char b;

    while (1)
    {
        printf("수식 (0 0 0 입력 시 종료)? ");
        scanf("%lf %c %lf", &a, &b, &c);

        if (a == 0 && b == '0' && c == 0)
        {
            break;
        }

        double result = calculator(a, b, c);


        printf("%lf\n", result);
    }
}


double calculator(double a, char b, double c)
{
    switch (b)
    {
    case '+':
        return a + c;
    case '-':
        return a - c;
    case '*':
        return a * c;
    case '/':
        return a / c;
    default:
        printf("잘못된 연산자입니다.\n");
        return 0;
    }
}