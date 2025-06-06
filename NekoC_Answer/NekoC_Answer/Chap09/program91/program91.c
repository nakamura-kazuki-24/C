/* program91.c */

#define _CRT_SECURE_NO_WARNINGS
#define NO 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	char point[8], name[32];

	struct _seiseki{
		char szName[32];
		int kokugo;
		int rika;
	} seiseki[NO];

	for (n = 0; n < NO; n++) {
		printf("%d番の氏名 -- ", n + 1);
		gets(seiseki[n].szName);
		printf("国語の点数 -- ");
		gets(point);
		seiseki[n].kokugo = atoi(point);
		printf("理科の点数 -- ");
		gets(point);
		seiseki[n].rika = atoi(point);
	}

	while (1) {
		printf("検索する氏名(Enterキーのみで終了) --- ");
		gets(name);
		if (strcmp(name, "") == 0)
			break;

		for (n = 0; n < NO; n++) {
			if (strstr(seiseki[n].szName, name))
				printf("%s 国語　%d点, 理科 %d点\n",
				seiseki[n].szName, seiseki[n].kokugo, seiseki[n].rika);
		}
	}

	return 0;
}
	
