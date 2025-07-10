/* ���ϸ�: assign08.c

 * ����: PA08. RGB �������κ��� red, green, blue ���� ���� �����ϴ� get_red, get_green, get_blue �Լ��� �����϶�
			   �� �Լ����� �̿��ؼ� �Է¹��� RGB ������ red, green, blue ���� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int color);
int get_green(unsigned int color);
int get_blue(unsigned int color);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print()
{
    unsigned int x;

    printf("RGB ����? ");
    scanf("%x", &x);

    printf("RGB %06X�� red: %d , green: %d , blue: %d", x, get_red(x), get_green(x), get_blue(x));
}

int get_red(unsigned int color)
{
    return (color >> 16) & 0xFF;
}

int get_green(unsigned int color)
{
    return (color >> 8) & 0xFF;
}

int get_blue(unsigned int color)
{
    return color & 0xFF;
}