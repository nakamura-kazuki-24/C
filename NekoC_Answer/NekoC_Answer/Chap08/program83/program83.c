/* program83.c */


#include <stdio.h>
#include <string.h>

void rev(char *);

int main()
{
	char string[64];
	printf("���������͂��Ă������� --- ");
	fgets(string, sizeof(string), stdin);
	string[strlen(string) - 1] = '\0';
	printf("���͂��ꂽ������́u%s�v�ł�\n", string);
	rev(string);
	printf("�t���ɕ��ёւ���Ɓu%s�v�ɂȂ�܂�\n", string);
	return 0;
}

void rev(char *str)
{
	char c, *p;

	p = str + strlen(str) - 1;

	while (str < p) {
		c = *str;
		*str++ = *p;
		*p-- = c;
	}
	return;
}
