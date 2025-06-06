/* program101.c */

#define _CRT_SECURE_NO_WARNINGS

#define FNAME "address.txt"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu();
void newfile();
void adddata();
void readdata();

int main()
{
	int menuno;

	while (1) {
		menuno = menu();
		if (menuno == 0)
			break;
		switch (menuno) {
			case 1: adddata();
				break;
			case 2: readdata();
				break;
			default:
				printf("番号が不正です\n");
				continue;
		}
	}
	return 0;
}

int menu()
{
	char strno[8];
	int no;

	printf("**** MENU ****\n");
	printf("1: データの追加\n");
	printf("2: データの読み出し\n");
	printf("0: 終了\n");
	printf("****************\n");
	printf("MenuNo---> ");

	gets(strno);
	no = atoi(strno);
	return no;
}

void adddata()
{
	FILE *fp;
	char szName[32], szAddress[64], szTel[16], szAnswer[8];

	fp = fopen(FNAME, "a");
	if (!fp) {
		printf("ファイルのオープンに失敗しました\n");
		return;
	}
	while (1) {
		printf("氏名 -- ");
		gets(szName);
		printf("住所 -- ");
		gets(szAddress);
		printf("電話 -- ");
		gets(szTel);
		fprintf(fp, "%s,%s,%s\n", szName, szAddress, szTel);
		printf("続けますか(Y/N) -- ");
		gets(szAnswer);
		if (strcmp(szAnswer, "N") == 0 || strcmp(szAnswer, "n") == 0)
			break;
	}

	fclose(fp);
	return;
}

void readdata()
{
	FILE *fp;
	char szBuf[256], szSearch[32], szName[32], szAddress[128], szTel[32],
		*token, seps[] = ",";

	fp = fopen(FNAME, "r");
	if (fp == NULL) {
		perror("ファイルのオープンに失敗しました");
		return;
	}
	printf("検索する氏名の一部 --- ");
	gets(szSearch);
	while (fgets(szBuf, 256, fp) != NULL) {
		token = strtok(szBuf, seps);
		strcpy(szName, token);
		token = strtok(NULL, seps);
		strcpy(szAddress, token);
		token = strtok(NULL, seps);
		strcpy(szTel, token);
		if (strstr(szName, szSearch))
			printf("%s--%s--%s", szName, szAddress, szTel);
	}

	fclose(fp);
	return;
}
	

