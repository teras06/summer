/* ���ϸ�: assign02.c

 * ����: PA02. �ؽ�Ʈ ������ �̸��� �Է¹޾Ƽ� ���� ���� ��� ���ڸ� �ҹ��ڷ� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.12
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

    printf("���ϸ�? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(tolower(ch), stdout); //�빮�ڸ� �ҹ��ڷ� ��ȯ
    }

    fclose(fp);
    return;
}