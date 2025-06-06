/* program54.c */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main()
{
	double bl, mbl, bw, bmi, ibw;

	printf("身長(cm) = ");
	/* scanfの変換指定子でdouble型に対応しているのは%fではな%lf*/
	scanf("%lf", &bl);
	printf("体重(kg) = ");
	scanf("%lf", &bw);
	/* 身長をm単位に換算*/
	mbl = bl / 100.0;
	bmi = bw / (mbl * mbl);
	/*理想的な体重を計算*/
	ibw = mbl * mbl * 22.0;

	printf("BMI = %4.1f, 理想的な体重 = %4.1f kg\n", bmi, ibw);

	return 0;
}