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
		printf("%d�Ԃ̎��� -- ", n + 1);
		gets(seiseki[n].szName);
		printf("����̓_�� -- ");
		gets(point);
		seiseki[n].kokugo = atoi(point);
		printf("���Ȃ̓_�� -- ");
		gets(point);
		seiseki[n].rika = atoi(point);
	}

	while (1) {
		printf("�������鎁��(Enter�L�[�݂̂ŏI��) --- ");
		gets(name);
		if (strcmp(name, "") == 0)
			break;

		for (n = 0; n < NO; n++) {
			if (strstr(seiseki[n].szName, name))
				printf("%s ����@%d�_, ���� %d�_\n",
				seiseki[n].szName, seiseki[n].kokugo, seiseki[n].rika);
		}
	}

	return 0;
}
	
