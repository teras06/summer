/* ���ϸ�: assign12.c

 * ����: PA12. ������̼� �ۿ��� �̵� �Ÿ��� ���� �ӷ����� ���� �����ð��� ���ϴ� ���α׷��� �ۼ��϶�, �̵� �Ÿ��� Km ������, ���� �ӷ��� Km/h ������ �Է¹�����, �� �� �Ǽ��� �Է¹޴´�
			   ���� �ҿ�ð��� �� ������ ����ϸ� ������ ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ScheduledTime(void);

int main()
{
	ScheduledTime();
	return 0;
}

void ScheduledTime(void) //���� �ð�
{
	double distance, speed;

	printf("�̵� �Ÿ�(km)? ");
	scanf("%lf", &distance);
	printf("���� �ӷ�(km/h)? ");
	scanf("%lf", &speed);

	int time = (int)((distance / speed) * 60);

	printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.", time);
}