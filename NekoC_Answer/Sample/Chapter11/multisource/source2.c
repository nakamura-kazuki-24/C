/* source2.c */
#include <stdio.h>

extern int a;

int func1()
{
	extern char *str;

	printf("�����́Asource2.c��func1�֐�\na = %d\n", a);
	printf("str�������܂�---%s\n", str);
	return 0;
}

