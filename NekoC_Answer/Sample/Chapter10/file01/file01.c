/* file01.c */

#include <stdio.h>

int main()
{
	FILE *fp; /*�t�@�C���E�|�C���^*/

	/* �t�@�C�����������݃��[�h�ŃI�[�v�� */
	fp = fopen("test.txt", "w");

	if (fp == NULL) {
		perror("�t�@�C���E�I�[�v���Ɏ��s���܂���\n");
		return -1;
	} else {
		printf("�t�@�C���𐳏�ɃI�[�v�����܂���\n");
	}

	fprintf(fp, "���߂Ẵt�@�C�����o�͂ł��B\n");

	/* �t�@�C���̃N���[�Y */
	if (fclose(fp) != 0) {
		perror("�t�@�C���̃N���[�Y�Ɏ��s���܂���\n");
	} else {
		printf("�t�@�C���𐳏�ɃN���[�Y���܂���\n");
	}

	return 0;
}

