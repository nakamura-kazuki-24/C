/* type02.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DATA {
	char name[32];
	char tel[32];
} MYDATA, *LPMYDATA;

int menu();
int meibo_input(LPMYDATA);
int meibo_output(LPMYDATA);

int main()
{
	int selectno, loopend = 0;

	MYDATA mydata = {"", ""};
	LPMYDATA lpMydata = &mydata;

	while (1) {
		selectno = menu();

		switch (selectno) {
			case 1:
				meibo_input(lpMydata);
				break;
			case 2:
				meibo_output(lpMydata);
				break;
			default:
				loopend = 1;
				break;
		}
		if (loopend)
			break;
	}
	return 0;
}

int menu()
{
	char ret[8];

	printf("****** MENU *****\n");
	printf("1:�f�[�^����\n");
	printf("2:�f�[�^�\��\n");
	printf("0:�I��\n");
	printf("*****************\n");
	printf("---->");
	gets(ret);

	return atoi(ret);
}

int meibo_input(LPMYDATA lpData)
{
	printf("����--");
	gets(lpData->name);
	printf("�d�b�ԍ�--");
	gets(lpData->tel);

	return 0;
}

int meibo_output(LPMYDATA lpData)
{
	if (!strcmp(lpData->name, "")) {
		printf("�f�[�^������܂���\n");
		return -1;
	}
	printf("����-- %s\n", lpData->name);
	printf("�d�b�ԍ�-- %s\n", lpData->tel);

	return 0;
}
