/* 파일명: assign02.c

 * 내용: PA02. 1번 프로그램의 아이디와 패스워드를 항상 소문자로만 저장하도록 처리하려고 한다
               LOGIN 구조체를 매개변수로 전달받아 구조체에 저장된 아이디와 패스워드를 모두 소문자로 만드는 make_lower 함수와 
               아이디와 패스워드를 출력하는 print_login 함수를 정의하라

 * 작성자: 김영재

 * 날짜: 2025.07.30
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