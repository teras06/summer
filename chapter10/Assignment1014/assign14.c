/* 파일명: assign14.c

 * 내용: PA14. 크기가 3인 RECT 구조체를 선언하고 0~99 사이의 임의의 좌표로 설정한다 직사각형의 우상단점의 좌표가 좌하단점보다 크도록 정규화하는 nomalize_rect 함수와 
               직사각형의 중심점의 좌표를 구하는 center_rect 함수를 정의하고 배열 전체에 대하여 각각 호출하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.08.04
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct point {
    int x;
    int y;
} POINT;

typedef struct rect {
    POINT left_bottom;
    POINT right_top;
} RECT;

void normalize_rect(RECT* r);
POINT center_rect(RECT r);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    RECT a[3];
    POINT center;
    srand((unsigned)time(NULL));

    int i;
    for (i = 0; i < 3; i++)
    {
        a[i].left_bottom.x = rand() % 100;
        a[i].left_bottom.y = rand() % 100;
        a[i].right_top.x = rand() % 100;
        a[i].right_top.y = rand() % 100;

        normalize_rect(&a[i]);
    }

    for (i = 0; i < 3; i++)
    {
        center = center_rect(a[i]);

        printf("[RECT 좌하단점:(%d, %d) 우상단점: (%d, %d)    중심점: (%d, %d)\n", a[i].left_bottom.x, a[i].left_bottom.y, a[i].right_top.x, a[i].right_top.y, center.x, center.y);
    }
}

void normalize_rect(RECT* r) //우산단점 > 좌하단점
{
    int temp;

    if (r->left_bottom.x > r->right_top.x)
    {
        temp = r->left_bottom.x;
        r->left_bottom.x = r->right_top.x;
        r->right_top.x = temp;
    }

    if (r->left_bottom.y > r->right_top.y)
    {
        temp = r->left_bottom.y;
        r->left_bottom.y = r->right_top.y;
        r->right_top.y = temp;
    }
}

POINT center_rect(RECT r) //중심점 구하기
{
    POINT center;
    center.x = (r.left_bottom.x + r.right_top.x) / 2;
    center.y = (r.left_bottom.y + r.right_top.y) / 2;
    return center;
}

