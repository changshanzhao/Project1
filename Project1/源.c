#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	int age = 10;
	if (age < 10)
		printf("幼儿\n");
	else if (age >= 10 && age < 18)
		printf("未成年\n");
	else if (age >= 18)
		printf("成年\n");
	else
		printf("成年\n");
	return 0;
}