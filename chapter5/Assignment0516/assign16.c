/* ���ϸ�: assign16.c

 * ����: PA16. ������ ����� ���ؼ� ����ϴ� ���α׷��� �ۼ��϶� ���� ������ �Է¹ް� ����� �� ���� ������� �Է¹޾� 
               ������ ����� �Է¹��� ������ŭ ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Multiple(void);

int main()
{
    Multiple();
    return 0;
}

void Multiple(void)
{
    int i, integer, unit;

    printf("���� ����? ");
    scanf("%d", &integer);
    printf("����� ����? ");
    scanf("%d", &unit);

    for (int i = 1; i < unit +1; i++)
    {
        printf("%d ", integer * i);
    }
}