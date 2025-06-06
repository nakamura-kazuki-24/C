/* program83.c */


#include <stdio.h>
#include <string.h>

void rev(char *);

int main()
{
	char string[64];
	printf("文字列を入力してください --- ");
	fgets(string, sizeof(string), stdin);
	string[strlen(string) - 1] = '\0';
	printf("入力された文字列は「%s」です\n", string);
	rev(string);
	printf("逆順に並び替えると「%s」になります\n", string);
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
