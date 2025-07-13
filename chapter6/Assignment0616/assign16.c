/* ���ϸ�: assign16.c

 * ����: PA16. 32��Ʈ �����Ϳ� ��Ʈ ��ġ pos�� ���ڷ� ���޹޾� 32��Ʈ �������� pos ��° ��Ʈ�� 1�̸� 1��, �ƴϸ� 0�� �����ϴ� is_bit_set �Լ��� �����϶� 
               pos�� 0~31 ������ ���̾�� �ϸ�, pos�� �߸��� ���� ���޵Ǹ� - 1�� �����Ѵ� �� �Լ��� �̿��ؼ� �Է¹��� ������ �������� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_bit_set(int data, int pos);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int data;

    printf("����? ");
    scanf("%i", &data);
    printf("%x: ", data);

    int i;
    for (i = 31; i >= 0; i--)
    {
        if (is_bit_set(data, i) == -1)
        {
            break;
        }

        printf("%d", is_bit_set(data, i));

        if (i % 4 == 0)
        {
            printf(" ");
        }
    }
}

int is_bit_set(int data, int pos)
{
    if (pos < 0 || pos > 31)
    {
        return -1;
    }

    return (data >> pos) & 1;
}