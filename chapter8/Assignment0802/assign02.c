/* ���ϸ�: assign02.c

 * ����: PA02. �迭 ���Ҹ� ����Ű�� �����Ϳ� ������ ������ �̿��ؼ� �Ǽ��� �迭�� ��� ���Ҹ� ����ϴ� ���α׷��� �ۼ��϶�
               �Ǽ��� �迭�� ũ�Ⱑ 10�̰� ���� ������� �����ؼ� ����ص� �ȴ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.19
 */

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
    double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
    double* p = arr;

    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%.2f ", *(p + i));
    }   
}