/* strarray02.c */

#include <stdio.h>

int main()
{
	char str[] = "ABC";

	printf("%s\n", str);

	str[0] = 'd';
	str[1] = 'e';
	str[2] = 'f';
	/* str[3]�͂��Ƃ���'\0'�Ȃ̂ŏ�������K�v�Ȃ� */

	printf("%s\n", str);

	return 0;
}