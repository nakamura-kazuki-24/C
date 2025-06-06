/* structarray.c */

#define STUDENTNO 5
#define SUBJECTNO 3

#include <stdio.h>

int drawline(void);

struct SEISEKI {
	char name[32];
	int kokugo;
	int sugaku;
	int eigo;
};

int main()
{
	struct SEISEKI myclass[STUDENTNO] = {
		"�c��", 80, 80, 55,
		"����", 75, 90, 70,
		"��c", 50, 45, 30,
		"���", 100, 55, 90,
		"����", 60, 85, 35
	};
	int i, sum0 = 0, sum1[SUBJECTNO], sum2[STUDENTNO];

	for (i = 0; i < SUBJECTNO; i++)
		sum1[i] = 0;
	for (i = 0; i < STUDENTNO; i++)
		sum2[i] = 0;

	for (i = 0; i < STUDENTNO; i++) {
			sum1[0] += myclass[i].kokugo;
			sum1[1] += myclass[i].sugaku;
			sum1[2] += myclass[i].eigo;
	}

	for (i = 0; i < STUDENTNO; i++)
		sum2[i] = myclass[i].kokugo + myclass[i].sugaku + myclass[i].eigo;

	for (i = 0; i < STUDENTNO; i++)
		sum0 += sum2[i];


	printf("**** ���� ****\n\n");
	
	printf("%6s %6s %6s %6s %6s\n", "����", "����", "���w", "�p��", "���v");
	drawline();
	

	for (i = 0; i < STUDENTNO; i++) 
		printf("%6s %6d %6d %6d %6d\n", 
			myclass[i].name, myclass[i].kokugo, myclass[i].sugaku, 
			myclass[i].eigo, sum2[i]);

	drawline();
	printf("%6s %6.1f %6.1f %6.1f %6.1f\n",
		"����", 
		(double)sum1[0] / STUDENTNO,
		(double)sum1[1] / STUDENTNO,
		(double)sum1[2] / STUDENTNO,
		(double)sum0 / STUDENTNO);
	return 0;
}

int drawline(void)
{
	int i;

	for (i = 0; i < 35; i++)
		printf("-");
	printf("\n");

	return 0;
}

	


