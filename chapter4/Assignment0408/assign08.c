/* ���ϸ�: assign08.c

 * ����: PA08. �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��϶�, �̶� ���̴� 3.141592��� �Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.141592
#include <stdio.h>
#include <math.h>

void Sphere(void);

int main()
{
    Sphere();
    return 0;
}

void Sphere(void)
{
    int radius;

    printf("�������� ����? ");
    scanf("%d", &radius);

    double volume = (4.0 / 3.0) * Pi * pow(radius, 3);

    printf("���� ���� : %lf", volume);
}