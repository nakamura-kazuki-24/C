/* readfile01x.c */

#include <stdio.h>
#include <string.h> /* strcat�֐��ŕK�v */

int main()
{
	FILE *fp;
	char filename[256];
	int c;

	printf("�t�@�C����(�g���q�s�v)--");
	gets(filename);
	strcat(filename, ".txt");
	fp = fopen(filename, "r");
	if (fp == NULL) {
		perror("�t�@�C�����I�[�v���ł��܂���\n");
		return -1;
	}

	while (fscanf(fp, "%c", &c) != EOF)
		printf("%c", c);

	fclose(fp);
	return 0;
}
