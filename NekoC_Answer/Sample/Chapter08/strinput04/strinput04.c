/* strinput04.c */

#include <stdio.h>

int main()
{
	char str[64], *s ="���������͂��Ă�������---";

	printf(s);
	while (strcmp(gets(str), "")) {
		printf("���͂����������%s�ł���\n", str);
		printf(s);
	}

	return 0;
}