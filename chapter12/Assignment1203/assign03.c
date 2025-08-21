/* 파일명: assign03.c

 * 내용: PA03. 텍스트 파일의 이름을 입력 받아서 파일 내에 문자들에 대하여 영문자의 개수를 문자 별로 세서 출력하는 프로그램을 작성하라 
               문자의 개수를 셀 때는 대소문자를 구분 하지 않는다

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
    int counts[26] = { 0 };

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
        fputc(ch, stdout);
    }

    rewind(fp); //파일 포인터 시작 지점으로 이동

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z')
        {
            counts[ch - 'a']++;
        }
    }

    fclose(fp);

    printf("\n");

    for (int i = 0; i < 26; i++)
    {
        if (counts[i] > 0)
        {
            printf("%c:%d  ", 'a' + i, counts[i]);
        }
    }
}