/* 파일명: assign07.c

 * 내용: PA07. 3번의 fibonacci 함수와 5번의 power 함수를 함수 포인터를 이용해서 호출하는 프로그램을 작성하라 
               직접 함수 포인터 변수를 선언하는 경우와 함수에 대한 포인터형을 정의한 다음 포인터 변수를 선언하는 경우를 모두 작성해보라 
               실행 결과는 3번 5번과 동일하다

 * 작성자: 김영재

 * 날짜: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    /* 직접 선언한 함수 포인터로 fibo 함수 호출

    int (*fibo_ptr)(int) = fibonacci;

    printf("%d ", fibo_ptr(10));
    */

    /* typedef를 이용하여 fibo 함수 호출
    * 
    typedef int (*FiboFunc)(int);
    FiboFunc fibo_typedef_ptr = fibonacci;

    printf("Fibonacci(10) = %d\n\n", fibo_typedef_ptr(10));
    */

    /* 직접 선언한 함수 포인터로 power 함수 호출
    * 
    int (*power_ptr)(int, int) = power;

    printf("power(2, 10) = %d\n\n", power_ptr(2, 10));
    */

    /* typedef를 이용하여 power 함수 호출
    * 
    typedef int (*PowerFunc)(int, int);
    PowerFunc power_typedef_ptr = power;

    printf("power(2, 10) = %d\n\n", power_typedef_ptr(2, 10));
    */

    return 0;
}