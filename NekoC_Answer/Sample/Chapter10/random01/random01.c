/* random01.c */

#define RECORDLEN 33

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char fname[256], data[16], ans[8];
	int no;

	printf("�t�@�C����(�g���q�s�v)--");
	fp = fopen(strcat(gets(fname), ".txt"), "r");
	if (fp == NULL) {
		perror("�t�@�C�����I�[�v���ł��܂���\n");
		return -1;
	}
	while (1) {
		printf("���l�ڂ̃f�[�^��ǂݍ��݂܂���---");
		gets(ans);
		no = atoi(ans);
		fseek(fp, RECORDLEN * (no - 1), SEEK_SET);
		if (fscanf(fp, "%s", data) == EOF) {
			perror("�ǂݍ��݃G���[�ł�\n");
			continue;
		}
		printf("[����] %s", data);
		fscanf(fp, "%s", data);
		printf("[�d�b] %s\n", data);
		printf("�����܂���(y/n): ");
		gets(ans);
		if (strcmp(ans, "n") == 0 || strcmp(ans, "N") == 0)
			break;
	}

	fclose(fp);

	return 0;
}