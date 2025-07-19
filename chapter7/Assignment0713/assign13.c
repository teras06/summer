/* ���ϸ�: assign13.c

 * ����: PA13. ��Ʈ OR �����ڸ� �̿��ϸ� �� �̹����� ��ĥ �� �ִ� ũ�Ⱑ ���� 2���� unsigned char �迭�� ��Ʈ OR ������ ����� ����ϴ� ���α׷��� �ۼ��϶�.
               unsigned char �迭 2���� ũ�Ⱑ 16�� �迭�� �����ϰ� ������ ������(0~255)�� ä���, ��Ʈ OR ���� ����� ������ �迭�� ���� �����ؼ� ����϶�


 * �ۼ���: �迵��

 * ��¥: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    unsigned char arr1[16];
    unsigned char arr2[16];
    unsigned char arr3[16];

    srand((unsigned int)time(0));

    int i;
    for (i = 0; i < 16; i++) 
    {
        arr1[i] = rand() % 256;
        arr2[i] = rand() % 256;
        arr3[i] = arr1[i] | arr2[i];
    }

    printf("image1:");
    for (i = 0; i < 16; i++) 
    {
        printf(" %02X", arr1[i]);
    }

    printf("\nimage2:");
    for (i = 0; i < 16; i++) 
    {
        printf(" %02X", arr2[i]);
    }

    printf("\nimage3:");
    for (i = 0; i < 16; i++) 
    {
        printf(" %02X", arr3[i]);
    }
}