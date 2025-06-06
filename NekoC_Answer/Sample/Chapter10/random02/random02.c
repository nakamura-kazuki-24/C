/* random02.c */

#define FNAME "meibo.txt"
#define RECORDLEN 88

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu();
int myread();
int mywrite();
int myrewrite();

char *format = "%-15s %-3d %-2s %-63s\n";

int main()
{
	int menuno;

	while (1) {
		menuno = menu();
		switch (menuno) {
			case 0:
				break;
			case 1:
				mywrite();
				break;
			case 2:
				myread();
				break;
			case 3:
				myrewrite();
				break;
			default:
				printf("�s���ł�\n");
				break;
		}
		if (!menuno)
			break;
	}

	return 0;
}

int menu()
{
	char ret[8];

	while (1) {
		printf("********************\n");
		printf("1:�f�[�^��������(�V�K�E�ǉ�)\n");
		printf("2:�f�[�^�ǂݏo��\n");
		printf("3:�f�[�^�C��\n");
		printf("0:�I��\n");
		printf("********************\n");
		printf("�I��--> ");
		gets(ret);
		ret[1] = '\0';
		if (ret[0] < '0' || ret[0] > '3') {
			printf("�ԍ����s���ł�\n");
			continue;
		}
		return atoi(ret);
	}
}

int mywrite()
{
	FILE *fp;
	char name[16], sex[4], address[64], buffer[8];
	int age;

	fp = fopen(FNAME, "a");
	if (fp == NULL) {
		perror("�t�@�C�����I�[�v���ł��܂���\n");
		return -1;
	}
	while (1) {
		printf("����--");
		gets(name);
		printf("�N��--");
		gets(buffer);
		age = atoi(buffer);
		printf("����(M/F)--");
		gets(sex);
		printf("�Z��--");
		gets(address);

		if (fprintf(fp, format, name, age, sex, address) < 0) {
			perror("�������݃G���[���������܂���");
			break;
		}
		printf("����ɓ��͂𑱂��܂���(y/n): ");
		gets(buffer);
		if (buffer[0] == 'n' || buffer[0] == 'N')
			break;
	}

	fclose(fp);
	return 0;
}

int myread()
{
	FILE *fp;
    char search[16], yesno[8], name[16], sex[4], address[64];
	int no = 0, find = 0, age;

	fp = fopen(FNAME, "r");
	if (fp == NULL) {
		perror("�t�@�C�����I�[�v���ł��܂���\n");
		return -1;
	}

	printf("�������鎁��-- ");
	gets(search);
	
	while (1) {
		fseek(fp, RECORDLEN * no++, SEEK_SET);
		if (fscanf(fp, "%s", name) == EOF)
			break;  
		if (strstr(name, search) != NULL) {
			find++;
			fscanf(fp, "%d", &age);
			fscanf(fp, "%s", sex);
			fscanf(fp, "%s", address);
			printf("����: %s\n", name);
			printf("�N��: %d\n", age);
			printf("����: %s\n", sex);
			printf("�Z��: %s\n", address);
			printf("------------------\n");
			printf("����Ɍ����𑱂��܂���(Y/N):");
			gets(yesno);
			if (yesno[0] == 'y' || yesno[0] == 'Y')
				continue;
			else
				break;
		}
	}
	printf("%d������������܂���\n", find);
	fclose(fp);
	return 0;
}

int myrewrite()
{
	FILE *fp;
	char buffer[8], shusei[16], yesno[8], name[16], sex[4], address[64];
	int no = 0, age, find = 0;

	fp = fopen(FNAME, "r+");
	if (fp == NULL) {
		perror("�t�@�C�����I�[�v���ł��܂���\n");
		return -1;
	}
	printf("�C������f�[�^�̎���-- ");
	gets(shusei);
	while (1) {
		fseek(fp, RECORDLEN * no++, SEEK_SET);
		if (fscanf(fp, "%s", name) == EOF)
			break;  
		if (strstr(name, shusei) != NULL) {
			find = 1;
			fscanf(fp, "%d", &age);
			fscanf(fp, "%s", sex);
			fscanf(fp, "%s", address);
			printf("����: %s\n", name);
			printf("�N��: %d\n", age);
			printf("����: %s\n", sex);
			printf("�Z��: %s\n", address);
			printf("------------------\n");
			printf("���̃f�[�^���C�����܂���(Y/N):");
			gets(yesno);
			if (yesno[0] == 'y' || yesno[0] == 'Y') {
				printf("�������C�����܂���(Y/N):");
				gets(yesno);
				if (yesno[0] == 'y' || yesno[0] == 'Y') {
					printf("����--");
					gets(name);
				}
				printf("�N����C�����܂���(Y/N):");
				gets(yesno);
				if (yesno[0] == 'y' || yesno[0] == 'Y') {
					printf("�N��--");
					gets(buffer);
					age = atoi(buffer);
				}
				printf("���ʂ��C�����܂���(Y/N):");
				gets(yesno);
				if (yesno[0] == 'y' || yesno[0] == 'Y') {
					printf("����--");
					gets(sex);
				}
				printf("�Z�����C�����܂���(Y/N):");
				gets(yesno);
				if (yesno[0] == 'y' || yesno[0] == 'Y') {
					printf("�Z��--");
					gets(address);
				}
				fseek(fp, RECORDLEN * (no - 1), SEEK_SET);
				fprintf(fp, format, name, age, sex, address);
			}
		}
	}
	if (find == 0)
			printf("�C�����ׂ��f�[�^�͂���܂���ł���\n");

	fclose(fp);
	return 0;
}





