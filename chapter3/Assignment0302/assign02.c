#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Oblong(void);

int main()
{
	Oblong();
	return 0;
}

void Oblong(void)
{
	int wid, len;

	printf("가로의 길이? ");
	scanf("%d", &wid);
	printf("세로의 길이? ");
	scanf("%d", &len);

	printf("직사각형의 넓이: %d\n", len * wid);
	printf("직사각형의 둘레: %d", len * 2 + wid * 2);

	return;
}