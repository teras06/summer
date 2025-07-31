/* ���ϸ�: assign03.c

 * ����: PA03. LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��϶� ���̵� �Է¹޾Ƽ� LOGIN ����ü �迭���� ���̵� ã�� ���� 
               �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�
               LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include <stdio.h>
#include <string.h>

typedef struct login
{
    char id[SIZE];
    char password[SIZE];

} LOGIN;

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    LOGIN login[5] =
    {
        {"user1", "pass1"},
        {"admin", "adminpass"},
        {"guest", "idontknow"},
        {"test", "1234"},
        {"hello", "world"}
    };

    char id[SIZE], password[SIZE];
    int i;

    while (1)
    {
        printf("ID? ");
        scanf("%s", id);

        if (strcmp(id, ".") == 0)
        {
            break;
        }

        int found = -1;

        for (i = 0; i < 5; i++)
        {
            if (strcmp(id, login[i].id) == 0)
            {
                found = i;
                break;
            }
        }

        if (found != -1)
        {
            printf("PW: ");
            scanf("%s", password);

            if (strcmp(password, login[found].password) == 0)
            {
                printf("�α��� ����\n");
                continue;
            }
            else
            {
                printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
                continue;
            }
        }
        else
        {
            printf("�������� �ʴ� ID�Դϴ�.\n");
            continue;
        }
    }
}