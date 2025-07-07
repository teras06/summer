/* 파일명: assign04.c

 * 내용: PA04. 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.07
 */

/* 
- 윤년 조건 
- 4로 나누어 떨어지는 해
- 4로 나누어 떨어지는 해 중에서 100으로 나누어 떨어지지 않는 해
- 100으로 나누어 떨어지는 해 중에서 400으로 나누어 떨어지는 해
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void LeapYear();

int main(void)
{
	LeapYear();
	return 0;
}

void LeapYear(void) //윤년
{
	int year;

	printf("연도? ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d년은 윤년입니다", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다", year);
	}
}