/* op04.c */

#include <stdio.h>

int main()
{
	double shincho = 1.72, taiju = 65.2;

	printf("BMI�͑̏d(kg)��g��(m)�̂Q��Ŋ��������̂ł�\n");
	printf("���ꂪ25�𒴂���Ɣ얞�ł�\n");
	printf("���Ƃ��ΐg��%4.2fm�ő̏d%4.2fkg�̐l�ł�\n", shincho, taiju);
	printf("BMI = %4.2f �� (%4.2f x %4.2f)�Ōv�Z���܂�\n", 
		taiju, shincho, shincho);
	printf("���̌��ʂ�%4.1f�ł���\n", taiju / (shincho * shincho));

	return 0;
}