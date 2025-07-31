/* ���ϸ�: assign12.c

 * ����: PA12. ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ��� ã�� �ε����� �迭�� �����ؼ� �����ϴ� find_all_in_array �Լ��� �ۼ��϶�
               �� �Լ��� ã�� �׸��� ������ �����Ѵ�, ���� ��� �迭���� 12�� 2�� ã������ 2�� �����ϰ� ã�� �׸��� �ε����� �Ű������� �ε��� �迭�� �����Ѵ�
               ���� �׸��� ã�� �� ������ 0�� �����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.07.22
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int find_all_in_array(int* arr, int key, int size, int* index_arr);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 23 };
    int index_arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;


    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("ã�� ��? ");
    scanf("%d", &key);

    int count = find_all_in_array(arr, key, size, index_arr);

    if (count == 0)
    {
        printf("%d�� �����ϴ�\n", key);
    }
    else
    {
        printf("ã�� �׸��� ��� %d�� �Դϴ�.\n", count);
        printf("ã�� �׸��� �ε���: ");

        for (int i = 0; i < count; i++)
        {
            printf("%d ", *(index_arr + i));
        }
        printf("\n");
    }
}

int find_all_in_array(int* arr, int key, int size, int* index_arr)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == key)
        {
            *(index_arr + count) = i;
            count++;
        }
    }

    return count;
}