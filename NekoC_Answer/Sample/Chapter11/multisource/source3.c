/* source3.c */

#include <stdio.h>

int func2()
{
	extern int a;
	extern char *str;  /*�����(1)*/

	printf("�����́Asource3.c��func2�֐��ł�\na = %d\n", a);
	printf("%s\n", str);	 /* (1)�������ƃG���[�ƂȂ� */
	return 0;
}

char *str = "abc";