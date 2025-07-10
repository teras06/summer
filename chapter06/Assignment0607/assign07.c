/* ���ϸ�: assign07.c

 * ����: PA07. �Ҽ�(prime number)�� 1�� �ڱ� �ڽŸ����� ���������� �ڿ����̴� ���ڷ� ���޹��� ������ �Ҽ����� �˻��ϴ� is_prime �Լ��� �ۼ��϶�
			   �� �Լ��� �̿��ؼ� 1���� N������ �Ҽ��� ���ؼ� ����ϰ� ��� �� ������ ����ϴ� ���α׷��� �ۼ��϶�, N�� ����ڷκ��� �Է¹޴´�

 * �ۼ���: �迵��

 * ��¥: 2025.07.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int N);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print()
{
    int N, count;

    printf("1~N ������ �Ҽ��� ���մϴ�. N��? ");
    scanf("%d", &N);

    if (N < 2)
    {
        printf("2 �̻��� ������ �Է��ؾ� �Ҽ��� �Ǻ��� �� �ֽ��ϴ�");
        return;
    }

    count = is_prime(N);

    printf("�Ҽ��� ��� %d���Դϴ�.", count);
}

int is_prime(int N)
{
    int i, j;
    int count = 0;
    int prime;

    for (i = 2; i <= N; i++)
    {
        prime = 1;

        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n");

    return count;
}