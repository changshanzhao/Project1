#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	int age = 10;
	if (age < 10)
		printf("�׶�\n");
	else if (age >= 10 && age < 18)
		printf("δ����\n");
	else if (age >= 18)
		printf("����\n");
	else
		printf("����\n");
	return 0;
}