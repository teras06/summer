/* ���ϸ�: assign04.c

 * ����: PA04. ���̵�� �н����尡 ����� �ؽ�Ʈ ������ ũ�Ⱑ 10�� LOGIN ����ü �迭�� �а� �� ���� �Է¹��� ���̵�� �н����尡 ��ġ�ϸ� �α��� ���� 
               �ƴϸ� �α��� ���ж�� ����ϴ� ���α׷��� �ۼ��϶� �ؽ�Ʈ ������ ������ ������ ����

 * �ۼ���: �迵��

 * ��¥: 2025.08.12
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LOGIN 10
#define MAX_ID 20
#define MAX_PW 20

typedef struct {
    char id[MAX_ID];
    char password[MAX_PW];
} LOGIN;

void login_program(void);

int main()
{
    login_program();
    return 0;
}

void login_program(void)
{
    FILE* fp;

    LOGIN users[MAX_LOGIN];
    char input_id[MAX_ID];
    char input_pw[MAX_PW];
    int count = 0;

    fp = fopen("password.txt", "r");

    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return;
    }

    while (count < MAX_LOGIN && fscanf(fp, "%s %s", users[count].id, users[count].password) == 2)
    {
        count++;
    }

    fclose(fp);

    while (1)
    {
        printf("���̵�: ");
        scanf("%s", input_id);

        if (strcmp(input_id, ".") == 0)
        {
            break;
        }

        int user_index = -1;

        int i;
        for (i = 0; i < count; i++)
        {
            if (strcmp(input_id, users[i].id) == 0)
            {
                user_index = i;
                break;
            }
        }

        if (user_index == -1)
        {
            printf("���̵� ã�� �� �����ϴ�.\n");
            continue;
        }

        printf("�н�����: ");
        scanf("%s", input_pw);

        if (strcmp(input_pw, users[user_index].password) == 0)
        {
            printf("�α��� ����\n");
            continue;
        }
        else
        {
            printf("��й�ȣ�� Ʋ�Ƚ��ϴ�\n");
            continue;
        }
    }
}