/* 파일명: assign02.c

 * 내용: PA02. 등비수열은 앞에 항에 항상 일정한 수(공비)를 곱하여 만들어가는 수열이다 크기가 10인 실수형 배열에 대하여 등차수열로 값을 채우려고 한다.
               첫 번째 항의 값과 공비(common ratio)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>
#include <math.h>

void Print(void);
void fillcd(double arr[], int size, double start, double ratio);
void print_arr(double arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double result[ARR_SIZE] = { 0 };
    double a, r;

    printf("첫 번째 항? ");
    scanf("%lf", &a);
    printf("공비? ");
    scanf("%lf", &r);

    fillcd(result, ARR_SIZE, a, r);

    print_arr(result, ARR_SIZE);
}

void print_arr(double arr[], int size)
{
    int i;
    printf("등비수열: ");
    for (i = 0; i < size; i++)
    {
        printf("%g ", arr[i]); //자동 형식 선택 지정자
    }
    printf("\n");
}

void fillcd(double arr[], int size, double start, double ratio)
{
    int i;
    for (i = 0; i < size; i++)
    {
        arr[i] = start * pow(ratio, i);
    }
}