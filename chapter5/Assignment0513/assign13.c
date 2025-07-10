/* ���ϸ�: assign13.c

 * ����: PA13. ASCII �ڵ带 �̿��ؼ� ���ڸ� ����ϴ� ���α׷��� �ۼ��϶� 
               ASCII �ڵ� �� 0~31��, 127���� ���� �����̹Ƿ� 32~126���� �Ҵ�� ���ڵ鸸 ����ϴµ�, �� �ٿ� 24���� ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ASCII(void);

int main()
{
    ASCII();
    return 0;
}

void ASCII(void)
{
    int count = 0;

    for (int i = 32; i <= 126; i++)
    {
        printf("%c ", i);  
        count++;

        if (count % 24 == 0)
        {
            printf("\n");
        }
    }
}