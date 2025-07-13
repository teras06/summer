/* 파일명: assign15.c

 * 내용: PA15. 정수를 몇 번째 자리에서 반올림할지 지정하는 round_pos 함수를 작성하라 예를 들어 round_pos(12345, 1)은 12350을 리턴하고 
               round_pos(12345, 2)는 12300을 리턴해야 한다 1357을 1~3번째 자리에서 반올림한 결과를 각각 구해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.13
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 

int round_pos(int integer, int unit);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    printf("1 번째 자리에서 반올림한 결과: %d\n", round_pos(1357, 1));
    printf("2 번째 자리에서 반올림한 결과: %d\n", round_pos(1357, 2));
    printf("3 번째 자리에서 반올림한 결과: %d\n", round_pos(1357, 3));
}

int round_pos(int integer, int unit)
{
    int pow10 = (int)pow(10, unit);
    int round = ((integer + pow10 / 2) / pow10) * pow10; //반올림 공식
    return round;
}