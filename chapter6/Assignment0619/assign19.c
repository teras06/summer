/* ���ϸ�: assign19.c

 * ����: PA19. ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��϶�
               ���� ��� graph(1200, 100);�� 100���� *�� �ϳ��� ����ϹǷ� *�� 12�� ����ϰ�,
               graph(1200, 10);�� 10���� *�� �ϳ��� ����ϹǷ� *�� 120�� ����Ѵ�
               0~9999������ ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int data, int scale);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int i, data;

    srand(time(NULL));

    for (i = 1; i < 4; i++)
    {
        int data = rand() % 10000;

        printf("%d:", data);
        graph(data, 100);
    }
}

void graph(int data, int scale)
{
    int i;

    for (i = 0; i < data / scale; i++)
    {
        printf("*");
    }

    printf("\n");
}