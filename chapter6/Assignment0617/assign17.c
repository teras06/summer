/* 파일명: assign17.c

 * 내용: PA17. 인자로 전달된 점의 좌표가 어느 사분면의 점인지 리턴하는 get_quadrant 함수를 작성하라 
               1~4사분면이면 1~4를 리턴하고, 원점이나 x축 또는 y축 위의 점은 0을 리턴하도록 작성하라 
			   get_quadrant 함수를 이용해서 입력받은 점의 좌표가 어느 사분면의 점인지 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.07.14
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_quadrant(int x, int y);
void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int x, y;
	while (1)
	{
		printf("점의 좌표 (x,y)? ");
		scanf("%d %d", &x, &y);

		if (get_quadrant(x, y) == 0)
		{
			break;
		}
		printf("%d분면의 점입니다.\n", get_quadrant(x, y));
	}
}


int get_quadrant(int x, int y)
{
if (x > 0 && y > 0)
{
	return 1;
}
else if (x < 0 && y > 0)
{
	return 2;
}
else if (x < 0 && y < 0)
{
	return 3;;
}
else if (x > 0 && y < 0)
{
	return 4;
}
else if (x == 0 && y == 0)
{
	return 0;
}
else
{
	return 0;
}
}
