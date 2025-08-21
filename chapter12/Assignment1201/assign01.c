/* ���ϸ�: assign01.c

 * ����: PA01. �ؽ�Ʈ ������ �̸��� �Է¹޾Ƽ� ������ ������ ���� ��ȣ�� �Բ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.12
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

    int line_number = 1;
    printf("%d: ", line_number);

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);

        if (ch == '\n')
        {
            line_number++;
            printf("%d: ", line_number);
        }
    }

    fclose(fp);
}

