/* bedit.c */

#include <stdio.h>

int main()
{
	FILE *fp;
	char fname[256];
	unsigned char c;
	int no = 0;

	printf("�t�@�C����---");
	gets(fname);

	fp = fopen(fname, "rb");
	if (fp == NULL) {
		perror("�t�@�C���I�[�v���Ɏ��s\n");
		return -1;
	}
	while(fread(&c, sizeof(char), 1, fp) != 0) {
		printf("%02X ", c);
		no++;
		if (no % 8 == 0)
			printf("\n");
	}
	printf("\n");
	fclose(fp);
	return 0;
}
