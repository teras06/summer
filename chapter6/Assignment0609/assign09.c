/* ���ϸ�: assign09.c

 * ����: PA09. red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����϶�
			   �տ��� ������ get_red, get_green, get_blue �Լ��� �Ա� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int color);
int get_green(unsigned int color);
int get_blue(unsigned int color);
int make_rgb(int r, int g, int b);
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

	printf("RGB %06x�� ����: %06X", x, make_rgb(get_red(x), get_green(x), get_blue(x)));
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

int make_rgb(int r, int g, int b)
{
	unsigned int rgb = (r << 16) + (g << 8) + b;
	return ~rgb & 0xFFFFFF;
}