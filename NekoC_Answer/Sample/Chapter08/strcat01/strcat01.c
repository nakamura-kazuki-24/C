/* strcat01.c */

#include <stdio.h>
#include <string.h>

int main()
{
	char name[64], sama[] = "�l";

	printf("�����O����͂��Ă��������B---");
	gets(name);
	printf("%s�ł��ˁB���҂����Ă���܂���\n", strcat(name, sama));

	return 0;
}

