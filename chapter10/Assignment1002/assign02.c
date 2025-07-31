/* ���ϸ�: assign02.c

 * ����: PA02. 1�� ���α׷��� ���̵�� �н����带 �׻� �ҹ��ڷθ� �����ϵ��� ó���Ϸ��� �Ѵ�
               LOGIN ����ü�� �Ű������� ���޹޾� ����ü�� ����� ���̵�� �н����带 ��� �ҹ��ڷ� ����� make_lower �Լ��� 
               ���̵�� �н����带 ����ϴ� print_login �Լ��� �����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char id[SIZE];
    char password[SIZE];
} LOGIN;

void make_lower(LOGIN* user);
void print_login(const LOGIN* user);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    LOGIN user;

    printf("ID? ");
    scanf("%s", user.id);
    printf("Password? ");
    scanf("%s", user.password);

    make_lower(&user);
    print_login(&user);

}

void make_lower(LOGIN* user)
{
    int i;

    for (i = 0; user->id[i] != '\0'; i++)
    {
        user->id[i] = tolower(user->id[i]);
    }

    for (i = 0; user->password[i] != '\0'; i++)
    {
        user->password[i] = tolower(user->password[i]);
    }
}

void print_login(const LOGIN* user)
{
    printf("ID: %s\n", user->id);
    printf("PW: ");

    for (int i = 0; i < strlen(user->password); i++)
    {
        printf("*");
    }
    printf("\n");
}