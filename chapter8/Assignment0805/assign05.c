/* ���ϸ�: assign05.c

 * ����: PA05. ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�
               �迭�� �迭�� ũ��, ����(common difference)�� �Ű������� �޾Ƽ� ���������� �迭�� ä��� arith_seq �Լ��� �����϶�
               ù ��° ���� ���� �迭�� 0�� ���ҿ� �־ �����Ѵ�
               arith_seq �Լ��� �̿��ؼ� �Է¹��� ù ��° �װ� ������ ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���ϰ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.19
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void arith_seq(int* arr, int size, int diff);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[10];
    int a, d, i;

    printf("ù ��° ��? ");
    scanf("%d", &a);
    printf("����? ");
    scanf("%d", &d);

    arr[0] = a;
    arith_seq(arr, 10, d);

    printf("��������: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }
}

void arith_seq(int* arr, int size, int diff)
{
    int i;
    for (i = 1; i < size; i++)
    {
        *(arr + i) = *(arr + i - 1) + diff;
    }
}