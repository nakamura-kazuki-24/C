/* main01.c */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1) {
		printf("�R�}���h���C������������܂���\n");
		return -1;
	}
	for (i = 0; i < argc; i++)
		printf("argv[%d]�́u%s�v�ł�\n", i, argv[i]);

	return 0;
}
