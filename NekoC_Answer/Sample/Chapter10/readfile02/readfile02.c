/* readfile02.c */

#include <stdio.h>

int main()
{
	FILE *fp;
	char fname[256];

	int c;

	printf("�t�@�C����(�g���q�s�v)---");
	fp = fopen(strcat(gets(fname), ".txt"), "r");

	if (fp == NULL) {
		perror("�t�@�C�����I�[�v���ł��܂���\n");
		return -1;
	}
	while ((c = fgetc(fp)) != EOF)
		putc(c, stdout);

	return 0;
}