/* 파일명: assign03.c

 * 내용: PA03. LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하라 아이디를 입력받아서 LOGIN 구조체 배열에서 아이디를 찾은 다음 
               입력받은 패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다
               LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다

 * 작성자: 김영재

 * 날짜: 2025.07.30
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
                printf("로그인 성공\n");
                continue;
            }
            else
            {
                printf("비밀번호가 일치하지 않습니다.\n");
                continue;
            }
        }
        else
        {
            printf("존재하지 않는 ID입니다.\n");
            continue;
        }
    }
}