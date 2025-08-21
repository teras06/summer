/* ���ϸ�: assign06.c

 * ����: PA06. 5�� ���α׷��� ���� �ŵ������� ���� ������ ��� �Լ��� �ݺ������� ȣ���ϹǷ� ��ȿ�����̴� 
               10��10 ũ���� 2���� �迭�� �غ��ؼ� 2^1 ~ 2^10 , 3^1 ~ 3^10, ... , 10^1 ~ 10^10�� power �Լ��� ȣ�� �� �� ���� ���� �����صΰ� ����ϵ��� power �Լ��� �����϶� 
               ���� ��� ó�� power(2, 5);�� ȣ���ϸ� ��� �Լ��� �����ؼ� 2^1 ~ 2^5�� �迭�� �����ϰ� 2^5�� �����Ѵ� 
               �� �������� �ٽ� power(2, 5)�� ȣ���ϸ� �̹� �迭�� ���� ���� �����Ƿ� ��� �Լ��� ȣ���ϴ� ��� �迭�� ���� �� ���� �����Ѵ� 
               �������� 5���� �����ϴ�

 * �ۼ���: �迵��

 * ��¥: 2025.08.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int exponent);
void Print(void);

int memo[11][11] = { 0 };

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int n;
    printf("��(base)? ");
    scanf("%d", &n);

    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%d ^ %d = %d\n", n, i, power(n, i));
    }
}

int power(int base, int exponent)
{
    if (exponent == 0) 
    {
        return 1;
    }

    if (base >= 1 && base <= 10 && exponent >= 1 && exponent <= 10) // ��, ������ 1~10
    {
        if (memo[base][exponent] != 0) // ����� �� ����
        {
            return memo[base][exponent];
        }
        else // �� ���, ����, ����
        {
            memo[base][exponent] = base * power(base, exponent - 1);
            return memo[base][exponent];
        }
    }

    return base * power(base, exponent - 1); 
}
