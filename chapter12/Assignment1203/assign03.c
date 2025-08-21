/* ���ϸ�: assign03.c

 * ����: PA03. �ؽ�Ʈ ������ �̸��� �Է� �޾Ƽ� ���� ���� ���ڵ鿡 ���Ͽ� �������� ������ ���� ���� ���� ����ϴ� ���α׷��� �ۼ��϶� 
               ������ ������ �� ���� ��ҹ��ڸ� ���� ���� �ʴ´�

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
    int counts[26] = { 0 };

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
        fputc(ch, stdout);
    }

    rewind(fp); //���� ������ ���� �������� �̵�

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