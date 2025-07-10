/* ���ϸ�: assign19.c

 * ����: PA19. ��ȭ��� ������ ���� ��ȭ �⿬�Ḧ ���� ���� �⿬��� ������ �⺻ �⿬��� ���� ����Ƽ�� ������ ����ϰ� �ִ� 
               ���� ����Ƽ�� ���� ���ͺб��� ���� ���� �ʰ��ϴ� ��� ���� 1�δ� �󸶷� ����� �ϰ� �ȴ� 
               �⺻ �⿬��, ���ͺб��� ���� ��, ���� 1�δ� ���� ����Ƽ�� �Է¹޾Ƽ� ���� �⿬�Ḧ ����ؼ� ����ϴ� ���α׷��� �ۼ��϶�
               ���� ���� ���� �鸸 ��, 2�鸸 ��, ... 15�鸸 ���� ���� ���� �⿬�Ḧ ���ؼ� ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Movie();

int main(void)
{
    Movie();
    return 0;
}

void Movie(void)
{
    int appearance, Break_even_point, guarantee; //�⺻ �⿬��, ���ͺб���, ����Ƽ

    printf("�⺻ �⿬��? ");
    scanf("%d", &appearance);
    printf("���� �б��� ���� ��? ");
    scanf("%d", &Break_even_point);
    printf("���� 1�δ� ����Ƽ? ");
    scanf("%d", &guarantee);

    int i;

    for (i = 1; i < 16; i++)
    {
        int gallery = i * 1000000;

        if (gallery <= Break_even_point)
        {
            printf("����  %d�� �� �� ���� �⿬��:  %d��\n", gallery, appearance);
        }
        else
        {
            printf("����  %d�� �� �� ���� �⿬��:  %d��\n", gallery, appearance + (gallery - Break_even_point) * guarantee);
        }
    }
}