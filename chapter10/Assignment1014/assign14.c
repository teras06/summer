/* ���ϸ�: assign14.c

 * ����: PA14. ũ�Ⱑ 3�� RECT ����ü�� �����ϰ� 0~99 ������ ������ ��ǥ�� �����Ѵ� ���簢���� �������� ��ǥ�� ���ϴ������� ũ���� ����ȭ�ϴ� nomalize_rect �Լ��� 
               ���簢���� �߽����� ��ǥ�� ���ϴ� center_rect �Լ��� �����ϰ� �迭 ��ü�� ���Ͽ� ���� ȣ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.04
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

        printf("[RECT ���ϴ���:(%d, %d) ������: (%d, %d)    �߽���: (%d, %d)\n", a[i].left_bottom.x, a[i].left_bottom.y, a[i].right_top.x, a[i].right_top.y, center.x, center.y);
    }
}

void normalize_rect(RECT* r) //������ > ���ϴ���
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

POINT center_rect(RECT r) //�߽��� ���ϱ�
{
    POINT center;
    center.x = (r.left_bottom.x + r.right_top.x) / 2;
    center.y = (r.left_bottom.y + r.right_top.y) / 2;
    return center;
}

