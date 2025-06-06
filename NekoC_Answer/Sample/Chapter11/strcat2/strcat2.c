/* strcat2.c */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

char *strcat2(char *, ...);

int main()
{
	char str1[256] = "�����́A"; /* �\���ȗ̈���m�ۂ��Ă��� */
	char *str2 = "�悢�V�C�ł����A";
	char *str3 = "�����͂ǂ��Ȃ邩�͂킩��܂���\n";
	strcat2(str1, str2, str3, "");
	printf(str1);

	return 0;
}

char *strcat2(char *p, ...)
{
	va_list ptr;
	char *st;

	/*�K�{�������k�������̕�����ł���΂����ɋA��*/
	if (p[0] == '\0') 
		return p;

	/*�k�������̕�������������烋�[�v�E�o*/
	va_start(ptr, p);
	while (1) {
		st = va_arg(ptr, char *);
		if (st[0] == '\0')
			break;
		strcat(p, st);
	}
	va_end(ptr);

	return p;
}