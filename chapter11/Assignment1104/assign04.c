/* 파일명: assign04.c

 * 내용: PA04. 3번 프로그램은 같은 항을 구할 때마다 재귀 함수를 반복적으로 호출하므로 비효율적이다 
               연습문제 20번처럼 fibonacci(N)을 구할 때, 그 값을 배열에 저장해 두고 다음 번에 fibonacci(N)을 구하면 
               배열에 저장해둔 값을 리턴하도록 함수를 수정하라, 실행 결과는 3번과 동일하다

 * 작성자: 김영재

 * 날짜: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#define MAX 50
#include <stdio.h>

int fibonacci(int n);
void Print(void);

int fibo[MAX];

int main()
{
    for (int i = 0; i < MAX; i++) 
    {
        fibo[i] = -1;
    }

    Print();
    return 0;
}

void Print(void)
{
    int i;
    for (i = 0; i < 20; i++) 
    {
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int n)
{
    if (fibo[n] != -1) 
    {
        return fibo[n];
    }

    if (n == 0 || n == 1) 
    {
        fibo[n] = 1;
    }
    else 
    {
        fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }

    return fibo[n];
}