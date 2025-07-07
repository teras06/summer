/* ���ϸ�: assign16.c

 * ����: PA16. ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, green, blue�� 8��Ʈ���� ����ؼ� ������ ǥ���ϹǷ�
               24��Ʈ Ʈ���÷���� �Ѵ�. ��ǻ�� �ý��ۿ����� 32��Ʈ �������� ������ ����Ʈ���� red, green, blue�� ������ ���� ������
               �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ� 0���� ä���. 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ�
               RGB ������ ���� ����ϴ� ���α׷��� �ۼ��϶�, RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void RGBcolor(void);

int main()
{
    RGBcolor();
    return 0;
}

void RGBcolor(void)
{
    int red, green, blue;
    unsigned int color;

    printf("red? ");
    scanf("%d", &red);
    printf("green? ");
    scanf("%d", &green);
    printf("blue? ");
    scanf("%d", &blue);

    unsigned char r = red;
    unsigned char g = green;
    unsigned char b = blue;

    color = (b << 16) | (g << 8) | r;

    printf("RGB Ʈ���÷�: %06X", color);
}