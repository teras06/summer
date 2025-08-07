/* ���ϸ�: assign15.c

 * ����: PA15. ���� ��ǥ�� ��Ÿ���� POINT ����ü�� ���ؼ� �� ���� ��ǥ�� �¹ٲٴ� swap_point �Լ��� �����Ͻÿ� 
               ũ�Ⱑ 10�� POINT ����ü �迭�� ���Ͽ� x ��ǥ�� �������� ���� �����ϴ� ���α׷��� �ۼ��϶� 
               POINT ����ü �迭�� �ʱⰪ�� ������� ���Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.08.04
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
    int x;
    int y;
} POINT;

void Print(void);
void swap_point(POINT* a, POINT* b);
void print_points(POINT arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    POINT arr[10] = {
        {30, 40}, {10, 20}, {50, 10}, {5, 5}, {70, 25},
        {20, 80}, {60, 30}, {90, 15}, {15, 60}, {35, 10}
    };

    int i, j, min_idx;

    printf("<<���� ��>>\n");
    print_points(arr, 10);

    for (i = 0; i < 9; i++) 
    {
        min_idx = i;
        for (j = i + 1; j < 10; j++) 
        {
            if (arr[j].x < arr[min_idx].x)
                min_idx = j;
        }

        if (min_idx != i)
        {
            swap_point(&arr[i], &arr[min_idx]);
        }
    }

    printf("<<���� ��>>\n");
    print_points(arr, 10);

}

void swap_point(POINT* a, POINT* b)
{
    POINT temp = *a;
    *a = *b;
    *b = temp;
}

void print_points(POINT arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("(%d, %d) ", arr[i].x, arr[i].y);
    }
    printf("\n");
}

