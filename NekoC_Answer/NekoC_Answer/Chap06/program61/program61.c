/* program61.c */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double circle(double);

int main()
{
	double r;

	printf("���a =  ");
	scanf("%lf", &r);
	printf("���a%f�̉~�̖ʐς�%f�ł�\n", r, circle(r));

	return 0;
}

double circle(double r)
{
	double pai = 3.14;
	return pai * pai * r;
}