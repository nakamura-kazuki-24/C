/* program61.c */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double circle(double);

int main()
{
	double r;

	printf("”¼Œa =  ");
	scanf("%lf", &r);
	printf("”¼Œa%f‚Ì‰~‚Ì–ÊÏ‚Í%f‚Å‚·\n", r, circle(r));

	return 0;
}

double circle(double r)
{
	double pai = 3.14;
	return pai * pai * r;
}