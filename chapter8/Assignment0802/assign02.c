/* 파일명: assign02.c

 * 내용: PA02. 배열 원소를 가리키는 포인터와 포인터 연산을 이용해서 실수형 배열의 모든 원소를 출력하는 프로그램을 작성하라
               실수형 배열은 크기가 10이고 값은 마음대로 지정해서 사용해도 된다

 * 작성자: 김영재

 * 날짜: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
    double* p = arr;

    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%.2f ", *(p + i));
    }   
}