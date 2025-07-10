/* 파일명: assign13.c

 * 내용: PA13. ASCII 코드를 이용해서 문자를 출력하는 프로그램을 작성하라 
               ASCII 코드 중 0~31번, 127번은 제어 문자이므로 32~126번에 할당된 문자들만 출력하는데, 한 줄에 24개씩 출력하라

 * 작성자: 김영재

 * 날짜: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ASCII(void);

int main()
{
    ASCII();
    return 0;
}

void ASCII(void)
{
    int count = 0;

    for (int i = 32; i <= 126; i++)
    {
        printf("%c ", i);  
        count++;

        if (count % 24 == 0)
        {
            printf("\n");
        }
    }
}