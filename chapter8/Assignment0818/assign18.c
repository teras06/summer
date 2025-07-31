/* ���ϸ�: assign18.c

 * ����: PA18. ���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´�
               ������ �迭�� �迭�� ũ��, ���� ����ִ� ������ ������ �Ű������� �����ؼ� ���Ҹ� �߰��ϴ� add_to_set �Լ��� �ۼ��϶�
               add_to_set�� ȣ��ǰ� ���� ���� ����ִ� ������ ������ �����Ǿ�� �Ѵ� ���Ҵ� �ִ� �迭�� ũ�⸸ŭ�� �߰��� �� �ִ�
               ���� �� �̻� ���Ҹ� �߰��� �� ���ų� �̹� ���� ���� ���Ұ� ������ 0�� �����ϰ�, ���Ҹ� �߰��ϴ� ��쿡�� 1�� �����Ѵ�
               add_to_set �Լ��� �̿��ؼ� �Է¹��� ������ ������ ���Ҹ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.22
 */

#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 10
#include <stdio.h>

int add_to_set(int arr[], int size, int* addition, int value);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[MAX_SIZE];
    int value;
    int addition = 0;

    while (1)
    {
        if (addition >= MAX_SIZE)
        {
            printf("�� �̻� �߰��� �� �����ϴ�.\n");
            break;
        }

        printf("���տ� �߰��� ����? ");
        scanf("%d", &value);

        if (add_to_set(arr, MAX_SIZE, &addition, value))
        {
            int i;
            for (i = 0; i < addition; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else
        {
            int j;
            for (j = 0; j < addition; j++)
            {
                if (arr[j] == value)
                {
                    printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", j);
                }
            }
        }
    }
}

int add_to_set(int arr[], int size, int* addition, int value)
{
    if (*addition >= size)
        return 0;

    for (int i = 0; i < *addition; i++)
    {
        if (arr[i] == value)
            return 0;
    }

    arr[*addition] = value;
    (*addition)++;

    return 1;
}