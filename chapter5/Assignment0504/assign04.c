/* ���ϸ�: assign04.c

 * ����: PA04. ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.07
 */

/* 
- ���� ���� 
- 4�� ������ �������� ��
- 4�� ������ �������� �� �߿��� 100���� ������ �������� �ʴ� ��
- 100���� ������ �������� �� �߿��� 400���� ������ �������� ��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void LeapYear();

int main(void)
{
	LeapYear();
	return 0;
}

void LeapYear(void) //����
{
	int year;

	printf("����? ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d���� �����Դϴ�", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�", year);
	}
}