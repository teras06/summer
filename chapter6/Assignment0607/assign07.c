/* 파일명: assign07.c

 * 내용: PA07. 소수(prime number)는 1과 자기 자신만으로 나누어지는 자연수이다 인자로 전달받은 정수가 소수인지 검사하는 is_prime 함수를 작성하라
			   이 함수를 이용해서 1에서 N사이의 소수를 구해서 출력하고 모두 몇 개인지 출력하는 프로그램을 작성하라, N은 사용자로부터 입력받는다

 * 작성자: 김영재

 * 날짜: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int N);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print()
{
    int N, count;

    printf("1~N 사이의 소수를 구합니다. N은? ");
    scanf("%d", &N);

    if (N < 2)
    {
        printf("2 이상의 정수를 입력해야 소수를 판별할 수 있습니다");
        return;
    }

    count = is_prime(N);

    printf("소수는 모두 %d개입니다.", count);
}

int is_prime(int N)
{
    int i, j;
    int count = 0;
    int prime;

    for (i = 2; i <= N; i++)
    {
        prime = 1;

        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n");

    return count;
}