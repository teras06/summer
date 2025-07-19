/* ���ϸ�: assign01.c

 * ����: PA01. ���������� �տ� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴� ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
               ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
void fillcd(int arr[], int size, int start, int diff);
void print_arr(int arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int result[ARR_SIZE] = { 0 };
    int a, d;

    printf("ù ��° ��? ");
    scanf("%d", &a);
    printf("����? ");
    scanf("%d", &d);

    fillcd(result, ARR_SIZE, a, d);
    print_arr(result, ARR_SIZE);
}

void print_arr(int arr[], int size)
{
    int i;

    printf("��������: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void fillcd(int arr[], int size, int start, int diff)
{
    int i;

    for (i = 0; i < size; i++)
    {
        arr[i] = start + i * diff;
    }
}