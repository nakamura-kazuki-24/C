/* strinput02.c */

#include <stdio.h>

int main()
{
	char str[64];

	printf("���������͂��Ă�������--");
	gets(str);
	printf("���͂���������́u%s�v�ł���\n", str);
	return 0;
}