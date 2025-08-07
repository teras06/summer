/* ���ϸ�: assign13.c

 * ����: PA13. ���簢�� ������ ��Ÿ���� RECT ����ü�� �����϶� ���簢���� ���ϴ����� ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ���� 
               ���簢���� ������ ����ϴ� print_rect �Լ��� �����ϰ� RECT ����ü ������ �����ؼ� ���簢���� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.04
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
    int x;
    int y;
} POINT;

typedef struct rect {
    POINT left_bottom;
    POINT right_top;
} RECT;

void print_rect(void);

int main()
{
    print_rect();
    return 0;
}

void print_rect(void)
{
    RECT r;

    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &r.left_bottom.x, &r.left_bottom.y);

    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &r.right_top.x, &r.right_top.y);

    printf("[RECT ���ϴ���:(%d %d) ������:(%d, %d)]", r.left_bottom.x, r.left_bottom.y, r.right_top.x, r.right_top.y);
}
