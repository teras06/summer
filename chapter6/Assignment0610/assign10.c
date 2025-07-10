/* ���ϸ�: assign10.c

 * ����: PA10. ���α׷��� �ۼ��ϴ� ���� 0~(N-1) ������ �ִ� ������ ������ �����ؾ� �ϴ� ��찡 ���� �ִ� 
               ǥ�� C ���̺귯���� rand �Լ��� �̿��ؼ� 0���� (N-1) ���̿� �ִ� ������ ������ �����ϴ� random �Լ��� �����϶�
               �Լ��� �̿��ؼ� ������ 0~99 ������ �ִ� ������ ���� 10���� �����ϰ� �� �հ踦 ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int N);
void Print(void);

int main()
{
    Print();
    return 0;
}

int random(int N)
{
    return rand() % N;
}

void Print(void)
{
    int i, r, sum = 0;

    srand((unsigned int)time(NULL));

    printf("0~99������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.\n");

    for (i = 0; i < 10; i++)
    {
        r = random(100);
        printf("  %d", r);
        sum += r;
    }

    printf("\n�հ�: %d", sum);
}