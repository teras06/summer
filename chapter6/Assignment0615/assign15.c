/* ���ϸ�: assign15.c

 * ����: PA15. ������ �� ��° �ڸ����� �ݿø����� �����ϴ� round_pos �Լ��� �ۼ��϶� ���� ��� round_pos(12345, 1)�� 12350�� �����ϰ� 
               round_pos(12345, 2)�� 12300�� �����ؾ� �Ѵ� 1357�� 1~3��° �ڸ����� �ݿø��� ����� ���� ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.13
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 

int round_pos(int integer, int unit);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    printf("1 ��° �ڸ����� �ݿø��� ���: %d\n", round_pos(1357, 1));
    printf("2 ��° �ڸ����� �ݿø��� ���: %d\n", round_pos(1357, 2));
    printf("3 ��° �ڸ����� �ݿø��� ���: %d\n", round_pos(1357, 3));
}

int round_pos(int integer, int unit)
{
    int pow10 = (int)pow(10, unit);
    int round = ((integer + pow10 / 2) / pow10) * pow10; //�ݿø� ����
    return round;
}