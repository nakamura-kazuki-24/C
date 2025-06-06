/* type03.c */

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

	MYDATA mydata[10];
	LPMYDATA lpMydata = mydata;

	memset(mydata, '\0', sizeof(MYDATA[10]));

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
	char strno[8];
	int no;

	printf("���Ԃ̃f�[�^����͂��܂���(0-9)--");
	gets(strno);
	if (strno[0] < '0' || strno[0] > '9') {
		printf("���͂��s���ł�\n");
		return -1;
	}
	strno[1] = '\0';
	no = atoi(strno);

	printf("����--");
	gets((lpData + no)->name);
	printf("�d�b�ԍ�--");
	gets((lpData + no)->tel);

	return 0;
}

int meibo_output(LPMYDATA lpData)
{
	char strno[8];
	int no;

	printf("���Ԃ̃f�[�^��ǂݏo���܂���(0-9)--");
	gets(strno);
	if (strno[0] < '0' || strno[0] > '9') {
		printf("���͂��s���ł�\n");
		return -1;
	}
	strno[1] = '\0';
	no = atoi(strno);

	if (!strcmp((lpData + no)->name, "")) {
		printf("�f�[�^������܂���\n");
		return -1;
	}
	printf("����-- %s\n", (lpData + no)->name);
	printf("�d�b�ԍ�-- %s\n", (lpData + no)->tel);

	return 0;
} 
