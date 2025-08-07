/* 파일명: assign12.c

 * 내용: PA12. 4바이트 데이터를 2바이트씩 나눠서 low word와 high word로 구한해서 사용하려고 한다 
               4바이트 데이터를 2개의 word로 접근할 수 있도록 공용체 mydata를 정의하라
               공용체의 멤버로는 4바이트 데이터로 접근하는 dword와 2개의 워드로 접근하는 words를 선언한다
               low word, high word 값을 매개변수로 전달받아 mydata 공용체로 만들어 리턴하는 make_dword 함수를 정의하라

 * 작성자: 김영재

 * 날짜: 2025.08.04
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union {
    unsigned int dword;
    unsigned short words[2];
} mydata;

mydata make_dword(unsigned short low, unsigned short high);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    unsigned short low, high;
    mydata result;

    printf("Low Word? ");
    scanf("%hi", &low);
    printf("High Word? ");
    scanf("%hi", &high);

    result = make_dword(low, high);

    printf("DWord data: %08x", result.dword);
}

mydata make_dword(unsigned short low, unsigned short high)
{
    mydata data;
    data.words[0] = low;
    data.words[1] = high;
    return data;
}