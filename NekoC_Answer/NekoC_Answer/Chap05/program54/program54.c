/* program54.c */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main()
{
	double bl, mbl, bw, bmi, ibw;

	printf("�g��(cm) = ");
	/* scanf�̕ϊ��w��q��double�^�ɑΉ����Ă���̂�%f�ł͂�%lf*/
	scanf("%lf", &bl);
	printf("�̏d(kg) = ");
	scanf("%lf", &bw);
	/* �g����m�P�ʂɊ��Z*/
	mbl = bl / 100.0;
	bmi = bw / (mbl * mbl);
	/*���z�I�ȑ̏d���v�Z*/
	ibw = mbl * mbl * 22.0;

	printf("BMI = %4.1f, ���z�I�ȑ̏d = %4.1f kg\n", bmi, ibw);

	return 0;
}