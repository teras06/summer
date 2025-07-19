/* ���ϸ�: assign11.c

 * ����: PA11. �� �л��� �� �б� ������ �߰���� 30��, �⸻��� 30��, ��������Ʈ 30��, �⼮ 10������ ���ȴ�
               �л��� ��� 5���� ��, �л��� ������ ���ϰ� �߰����, �⸻���, ��������Ʈ, �⼮�� ������� ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�
               ������ �����ϴ� 2���� �迭�� ������ ���� �ʱ�ȭ�ؼ� ����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5
#include <stdio.h>

void Print(void);
void score_arr(int arr1[ARR_SIZE][ARR_SIZE], double average[]);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE][ARR_SIZE] = { { 28, 28, 26, 9, 0 }, { 30, 27, 30, 10, 0 }, { 25, 26, 24, 8, 0 }, { 18, 22, 22, 5, 0 }, { 24, 25, 30, 10, 0 } };
    double average[4];

    int i, j;

    score_arr(arr, average);

    for (i = 0; i < 5; i++)
    {
        printf("�� ��   %d��:", i+1);
        for (j = 0; j < 4; j++)
        {
            printf("   %2d", arr[i][j]);
        }
        printf(" ==>  %2d\n", arr[i][4]);
    }

    printf("�׸� ���:   ");
    for (i = 0; i < 4; i++)
    {
        printf("%2.2f ", average[i]);
    }
}

void score_arr(int arr[ARR_SIZE][ARR_SIZE], double average[])
{
    int i,j;
    for (i = 0; i < ARR_SIZE; i++) //����
    {
        for (j = 0; j < 4; j++)
        {
            arr[i][4] += arr[i][j];
        }
    }

    for (i = 0; i < 4; i++) //���
    {
        int sum = 0;

        for (j = 0; j < ARR_SIZE; j++)
        {
            sum += arr[j][i];
        }
        average[i] = sum / (double)ARR_SIZE;
    }
}

