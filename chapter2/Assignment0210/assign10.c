#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int num;

    printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n����? ");
    scanf("%i", &num);

    printf(" 8����: %#o\n", num);
    printf("10����: %d\n", num);
    printf("16����: %#x", num);

    return;
}