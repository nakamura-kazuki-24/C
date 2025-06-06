/* type04.c */

#include <stdio.h>

typedef struct _tagDATA {
	char name[32];
	int age;
	struct _tagDATA *nextdata;
} DATA;

int main()
{
	DATA a = {"�H��", 28, }, b = {"�c��", 35, }, c = {"���", 18, };
	DATA *lpdata;

	a.nextdata = &b;
	b.nextdata = &c;
	c.nextdata = NULL;

	for (lpdata = &a; lpdata; lpdata = lpdata->nextdata)
		printf("%s (%d��)\n", lpdata->name, lpdata->age);

	return 0;
}
