/* file02.c */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mywrite(FILE *);

int main()
{
	FILE *fp;
	char filename[256];

	printf("�t�@�C����(�g���q�s�v)--- ");
	gets(filename);
	strcat(filename, ".txt");

	fp = fopen(filename, "a");/*�ǉ����[�h*/
	if (fp == NULL) {
		perror("�t�@�C���̃I�[�v���Ɏ��s���܂����B\n");
		return -1;
	}
	while (!mywrite(fp)); /* �����̏������ɒ��� */

	fclose(fp);
	return 0;
}

int mywrite(FILE *f)
{
	char name[16];
	char tel[16];
	char yesno[8];
	char *format = "%-15s %-15s\n";

	printf("����-- ");
	gets(name);
	printf("�d�b-- ");
	gets(tel);

	printf(format, name, tel);
	printf("���̃f�[�^���������݂܂���(y/n):");
	gets(yesno);
	if (strcmp(yesno, "Y") == 0 || strcmp(yesno, "y") == 0)
		fprintf(f, format, name, tel);
	
	printf("����Ƀf�[�^����͂��܂���(y/n):");
	gets(yesno);
	if (strcmp(yesno, "N") == 0 || strcmp(yesno, "n") == 0)
		return -1;

	return 0;
}



