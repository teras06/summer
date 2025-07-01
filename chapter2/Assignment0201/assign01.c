#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main(void)
{
	Print();
	return 0;
}

void Print(void)
{
	printf("int main(void)\n{\n    return 0;\n}");
}