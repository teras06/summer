/* 파일명: assign06.c

 * 내용: PA06. 5번 프로그램은 같은 거듭제곱을 구할 때마다 재귀 함수를 반복적으로 호출하므로 비효율적이다 
               10×10 크기의 2차원 배열을 준비해서 2^1 ~ 2^10 , 3^1 ~ 3^10, ... , 10^1 ~ 10^10은 power 함수가 호출 될 때 구한 값을 저장해두고 사용하도록 power 함수를 수정하라 
               예를 들어 처음 power(2, 5);을 호출하면 재귀 함수를 수행해서 2^1 ~ 2^5를 배열에 저장하고 2^5를 리턴한다 
               그 다음번에 다시 power(2, 5)를 호출하면 이미 배열에 구한 값이 있으므로 재귀 함수를 호출하는 대신 배열에 구해 둔 값을 리턴한다 
               실행결과는 5번과 동일하다

 * 작성자: 김영재

 * 날짜: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int exponent);
void Print(void);

int memo[11][11] = { 0 };

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int n;
    printf("밑(base)? ");
    scanf("%d", &n);

    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%d ^ %d = %d\n", n, i, power(n, i));
    }
}

int power(int base, int exponent)
{
    if (exponent == 0) 
    {
        return 1;
    }

    if (base >= 1 && base <= 10 && exponent >= 1 && exponent <= 10) // 밑, 지수는 1~10
    {
        if (memo[base][exponent] != 0) // 저장된 값 리턴
        {
            return memo[base][exponent];
        }
        else // 값 계산, 저장, 리턴
        {
            memo[base][exponent] = base * power(base, exponent - 1);
            return memo[base][exponent];
        }
    }

    return base * power(base, exponent - 1); 
}
