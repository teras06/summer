#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Square(void);

int main()
{
	Square();
	return 0;
}

void Square(void)
{
	int len;

	printf("한 변의 길이? ");
	scanf("%d", &len);

	printf("정사각형의 넓이: %d\n", len * len);
	printf("정사각형의 둘레: %d", len * 4);

	return;
}