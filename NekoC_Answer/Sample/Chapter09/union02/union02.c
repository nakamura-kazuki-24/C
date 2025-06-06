/* union02.c */

#define PAN "�p���H������"
#define KYO "100m����"
#define NO 6

#include <stdio.h>
#include <stdlib.h>

typedef struct {
		char name[16];
		char kyogi[32];
		union {
			double tm;
			int juni;
		} seiseki;
} DATA, *LPDATA;

int myinput(LPDATA, char *, char *, char *);

int main()
{
	DATA data[NO];
	LPDATA lpdata;
	int i;

	lpdata = data;

	myinput(lpdata + 0, "�c��", PAN, "1");
	myinput(lpdata + 1, "����", KYO, "20.5");
	myinput(lpdata + 2, "���c", PAN, "2");
	myinput(lpdata + 3, "����", PAN, "4");
	myinput(lpdata + 4, "�H��", KYO, "15.2");
	myinput(lpdata + 5, "���", PAN, "3");


	printf("%4s %-14s %4s\n", "����", "���Z��", "����");
	printf("---------------------------\n");
	for (i = 0; i < NO; i++) {
		printf("%4s %-14s ", data[i].name, data[i].kyogi);
		if (strcmp(data[i].kyogi, "100m����") == 0) {
			printf("%4.1f�b\n", data[i].seiseki.tm);
		} else {
			printf("%4d��\n", data[i].seiseki.juni);
		}
	}

	return 0;
}

int myinput(LPDATA p, char *nm, char *kg, char *sk)
{
	strcpy(p->name, nm);
	strcpy(p->kyogi, kg);
	if (!strcmp(kg, PAN))
		p->seiseki.juni = atoi(sk);
	else
		p->seiseki.tm = atof(sk);
	return 0;
}


