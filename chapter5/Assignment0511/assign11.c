/* ���ϸ�: assign11.c

 * ����: PA11. 32��Ʈ ũ���� ������(��ȣ ���� ������)�� ���ؼ� 0~31��° ��Ʈ ���� �ϳ��� 1�� ���� ���ؼ� 16������ 10������ �ⷫ�ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Bit(void);

int main()
{
    Bit();
    return 0;
}

void Bit(void)
{
    int i;
    unsigned int bit = 1;

    for (i = 0;i < 32;i++)
    {
        printf("%d�� ��Ʈ�� 1�� ��: %08x %d\n", i, bit << i, bit << i);
    }
}