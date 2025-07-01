#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Size(void);

int main()
{
	Size();
	return 0;
}

void Size(void)
{
	char s;

	printf("옷 사이즈(S,M,L)? ");
	scanf("%c", &s);

	printf("%c 사이즈를 선택했습니다.", s);

	return;
}