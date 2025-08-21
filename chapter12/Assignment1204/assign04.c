/* 파일명: assign04.c

 * 내용: PA04. 아이디와 패스워드가 저장된 텍스트 파일을 크기가 10인 LOGIN 구조체 배열로 읽고 온 다음 입력받은 아이디와 패스워드가 일치하면 로그인 성공 
               아니면 로그인 실패라고 출력하는 프로그램을 작성하라 텍스트 파일의 형식은 다음과 같다

 * 작성자: 김영재

 * 날짜: 2025.08.12
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
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    while (count < MAX_LOGIN && fscanf(fp, "%s %s", users[count].id, users[count].password) == 2)
    {
        count++;
    }

    fclose(fp);

    while (1)
    {
        printf("아이디: ");
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
            printf("아이디를 찾을 수 없습니다.\n");
            continue;
        }

        printf("패스워드: ");
        scanf("%s", input_pw);

        if (strcmp(input_pw, users[user_index].password) == 0)
        {
            printf("로그인 성공\n");
            continue;
        }
        else
        {
            printf("비밀번호가 틀렸습니다\n");
            continue;
        }
    }
}