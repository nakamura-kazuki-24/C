/* string05.c */

#include <string.h>
#include <stdio.h>

int main()
{
	char str[32];
	size_t len;

	printf("���������͂��Ă�������--");
	scanf("%s", str);

	len = strlen(str);

	printf("%s�̒���%d�ł�\n", str, len);

	return 0;
}