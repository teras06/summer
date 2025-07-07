/* ���ϸ�: assign08.c

 * ����: PA08. ��Ʈ ������ �����ϴ� ���⸦ ���α׷��϶�
               &�� ��Ʈ AND, I�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ� "0xAB & 0xCC"ó�� ������� �Է��ؼ� ���� ����� ���϶�
               ��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8����, 16������ ����� �� �ְ� �ϰ�, ������ ����� 16������ ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BitOperations();

int main(void)
{
    BitOperations();
    return 0;
}

void BitOperations(void)
{
    int x, y;
    char unit;

    printf("��Ʈ �����? ");
    scanf("%i %c %i", &x, &unit, &y);


    if (unit == '&')
    {
        printf("%x & %x = %x ", x, y, x & y);
    }
    else if (unit == '|')
    {
        printf("%x | %x = %x ", x, y, x | y);
    }
    else if (unit == '^')
    {
        printf("%x ^ %x = %x ", x, y, x ^ y);
    }
    else
    {
        printf("�߸� �Է��ϼ̽��ϴ�.");
    }
}

/*
switch (unit)
    {
    case '&':
        printf("%x & %x = %x ", x, y, x & y);
        break;
    case '|':
        printf("%x | %x = %x ", x, y, x | y);
        break;
    case '^':
        printf("%x ^ %x = %x ", x, y, x ^ y);
        break;
    }
*/