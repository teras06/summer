/* ���ϸ�: assign09.c

 * ����: PA09. �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Time(void);

int main()
{
	Time();
	return 0;
}

void Time(void)
{
	int total, hour, minute, second;

	printf("����ð�(��)? ");
	scanf("%d", &total);

	hour = total / 3600;

	minute = (total % 3600) / 60;

	second = total % 60;

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", hour, minute, second);
}