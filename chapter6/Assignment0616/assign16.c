/* 파일명: assign16.c

 * 내용: PA16. 32비트 데이터와 비트 위치 pos를 인자로 전달받아 32비트 데이터의 pos 번째 비트가 1이면 1을, 아니면 0을 리턴하는 is_bit_set 함수를 정의하라 
               pos는 0~31 사이의 값이어야 하며, pos에 잘못된 값이 전달되면 - 1을 리턴한다 이 함수를 이용해서 입력받은 정수를 이진수로 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_bit_set(int data, int pos);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int data;

    printf("정수? ");
    scanf("%i", &data);
    printf("%x: ", data);

    int i;
    for (i = 31; i >= 0; i--)
    {
        if (is_bit_set(data, i) == -1)
        {
            break;
        }

        printf("%d", is_bit_set(data, i));

        if (i % 4 == 0)
        {
            printf(" ");
        }
    }
}

int is_bit_set(int data, int pos)
{
    if (pos < 0 || pos > 31)
    {
        return -1;
    }

    return (data >> pos) & 1;
}