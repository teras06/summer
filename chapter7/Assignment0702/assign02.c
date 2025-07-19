/* ���ϸ�: assign02.c

 * ����: PA02. �������� �տ� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴� ũ�Ⱑ 10�� �Ǽ��� �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
               ù ��° ���� ���� ����(common ratio)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.15
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>
#include <math.h>

void Print(void);
void fillcd(double arr[], int size, double start, double ratio);
void print_arr(double arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double result[ARR_SIZE] = { 0 };
    double a, r;

    printf("ù ��° ��? ");
    scanf("%lf", &a);
    printf("����? ");
    scanf("%lf", &r);

    fillcd(result, ARR_SIZE, a, r);

    print_arr(result, ARR_SIZE);
}

void print_arr(double arr[], int size)
{
    int i;
    printf("������: ");
    for (i = 0; i < size; i++)
    {
        printf("%g ", arr[i]); //�ڵ� ���� ���� ������
    }
    printf("\n");
}

void fillcd(double arr[], int size, double start, double ratio)
{
    int i;
    for (i = 0; i < size; i++)
    {
        arr[i] = start * pow(ratio, i);
    }
}