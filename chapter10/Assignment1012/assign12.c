/* ���ϸ�: assign12.c

 * ����: PA12. 4����Ʈ �����͸� 2����Ʈ�� ������ low word�� high word�� �����ؼ� ����Ϸ��� �Ѵ� 
               4����Ʈ �����͸� 2���� word�� ������ �� �ֵ��� ����ü mydata�� �����϶�
               ����ü�� ����δ� 4����Ʈ �����ͷ� �����ϴ� dword�� 2���� ����� �����ϴ� words�� �����Ѵ�
               low word, high word ���� �Ű������� ���޹޾� mydata ����ü�� ����� �����ϴ� make_dword �Լ��� �����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.04
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union {
    unsigned int dword;
    unsigned short words[2];
} mydata;

mydata make_dword(unsigned short low, unsigned short high);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    unsigned short low, high;
    mydata result;

    printf("Low Word? ");
    scanf("%hi", &low);
    printf("High Word? ");
    scanf("%hi", &high);

    result = make_dword(low, high);

    printf("DWord data: %08x", result.dword);
}

mydata make_dword(unsigned short low, unsigned short high)
{
    mydata data;
    data.words[0] = low;
    data.words[1] = high;
    return data;
}