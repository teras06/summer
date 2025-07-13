/* 파일명: assign18.c

 * 내용: PA18. 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하라
               0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int a);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int i, r;

    srand(time(NULL));

    for (i = 0; i <= 2; i++)
    {
        r = rand() % 1000;
        printf("%d의 약수: ", r);
        divisors(r);
    }
}

void divisors(int a)
{
    int i;
    int num = 0;

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
            num++;
        }
    }

    printf("=> 총 %d개\n", num);
}