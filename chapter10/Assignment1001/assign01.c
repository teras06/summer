/* ���ϸ�: assign01.c

 * ����: PA01. ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����϶�
               ���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�
               LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��϶�
			   �н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����϶�

 * �ۼ���: �迵��

 * ��¥: 2025.07.30
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

typedef struct login
{
	char id[21];
	char password[21];

} LOGIN;

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	LOGIN name;

	printf("ID? ");
	scanf("%s", name.id);
	printf("Password? ");
	scanf("%s", name.password);

	printf("ID: %s\n", name.id);
	printf("PW: ");

	int i;
	for (i = 0; i < 20; i++)
	{
		if (name.password[i] == '\0')
			break;
		printf("*");
	}
}