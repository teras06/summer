/* ���ϸ�: assign10.c

 * ����: PA10. �װ��� ���� �� ������ �� �ҿ�ð��� �ð� ������ �Է¹޾� ��ĥ �� �ð� �� ������ ����ϴ� ���α׷��� �ۼ��϶�, �� �ҿ�ð��� �Ǽ��� �Է¹޴´�
               ��) �ҿ�ð� 10.5 �ð� = 10�ð� 30��

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void FlightTime(void);

int main()
{
	FlightTime();
	return 0;
}

void FlightTime(void)
{
	double total;
	int day, hour, minute;

	printf("���� �ҿ�ð�(�ð�)? ");
	scanf("%lf", &total);

	day = (int)total / 24;

	hour = (int)total % 24;

	minute = (int)((total - (int)total) * 60);

	printf("���� �ҿ�ð��� %d�� %d�ð� %d���Դϴ�.", day, hour, minute);
}