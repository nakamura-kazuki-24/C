/* readfile01.c */

#include <stdio.h>
#include <string.h> /* strcat�֐��ŕK�v */

int main()
{
	FILE *fp;
	char filename[256], name[16], tel[16];
	char *format = "%-15s %-15s\n";

	printf("�t�@�C����(�g���q�s�v)--");
	gets(filename);
	strcat(filename, ".txt");
	fp = fopen(filename, "r");
	if (fp == NULL) {
		perror("�t�@�C�����I�[�v���ł��܂���\n");
		return -1;
	}

	while (fscanf(fp, "%s%s", name, tel) != EOF)
		printf(format, name, tel);

	fclose(fp);
	return 0;
}
