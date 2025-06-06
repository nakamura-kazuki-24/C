/* program92.c */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct _BMI {
	double bl;
	double bw;
	double bmi;
};

void bmi(struct _BMI *);

int main()
{
	struct _BMI mybmi;

	printf("g’·(m) -- ");
	scanf("%lf", &mybmi.bl);
	printf("‘Ìd(kg) -- ");
	scanf("%lf", &mybmi.bw);
	bmi(&mybmi);
	printf("bmi = %f\n", mybmi.bmi);

	return 0;
}

void bmi(struct _BMI *b)
{
	b->bmi = b->bw / (b->bl * b->bl);
	return;
}