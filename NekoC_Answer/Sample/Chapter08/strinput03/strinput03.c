/* strinput03.c */

#include <stdio.h>

int main()
{
	char str[64];

	while (1) {
		printf("���������͂��Ă�������---");
		gets(str);
		if (strcmp(str, "") == 0)
			break;
		printf("���͂��������́u%s�v�ł���\n", str);
	}

	return 0;
}