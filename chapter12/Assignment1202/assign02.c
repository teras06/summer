/* 파일명: assign02.c

 * 내용: PA02. 텍스트 파일의 이름을 입력받아서 파일 내의 모든 문자를 소문자로 변환해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.08.12
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    FILE* fp;

    char filename[100];
    int ch;

    printf("파일명? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(tolower(ch), stdout); //대문자를 소문자로 변환
    }

    fclose(fp);
    return;
}