/* funcptr03.c */

#include <stdio.h>

int main()
{
	int myfunc(char *, char *);
	int (*ptr)();

	ptr = myfunc;

	(*myfunc)("�c��", "�w��");
	(*ptr)("�R�c", "��Ј�");
	myfunc("����", "������");

	return 0;
}


int myfunc(char *str1, char *str2)
{
	printf("%s����́A%s�ł�\n", str1, str2);

	return 0;
}

