/* param02.c */

#include <stdio.h>

int showname(char **);

int main()
{
	char *name[] = {
		"�H��N�F",
		"�c���ǈ�",
		"Thomas",
		"�G�W�\��"
	};

	showname(name);

	return 0;
}

int showname(char **p)
{
	int i;

	for (i = 0; i < 4; i++)
		printf("%s\n", p[i]);

	return 0;
}