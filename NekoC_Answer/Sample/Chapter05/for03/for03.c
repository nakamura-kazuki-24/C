/* for03.c */

#include <stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 4; i++) {
		printf("�O����for���̂P, i = %d\n", i);

		for (j = 0; j < 3; j++) {
			printf("\t������for��, j = %d\n", j);
		}

		printf("�O����for���̂Q, i = %d\n", i);
	}

	return 0;
}