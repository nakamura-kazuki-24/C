/* string04.c */

#include <stdio.h>
#include <string.h> /* strcmp�֐����g���̂ŕK�v */

int main()
{
	char str1[32], str2[32];
	int cmp;

	printf("str1����͂��Ă�������--");
	scanf("%s", str1);
	printf("str2����͂��Ă�������--");
	scanf("%s", str2);

	cmp = strcmp(str1, str2);
	if (cmp < 0)
		printf("%s�́A%s���O�ɂ���܂�\n", str1, str2);
	else if (cmp > 0)
		printf("%s�́A%s�����ɂ���܂�\n", str1, str2);
	else
		printf("%s��%s�́A����������ł�\n", str1, str2);

	return 0;
}