/* format03.c */

#include <stdio.h>

int main()
{
	double a = 0.5, b = 10.5;
	int c = 215, d;
	char e = 'A';


	printf("%f + %f = %f\n", a, b, a + b);
	d = c + 11;
	printf("c�̒l��%d�ł����11���������%d�ƂȂ�܂�\n", c, d);
	printf("e�ɂ�\"%c\"���������Ă��܂�\n", e);

	return 0;
}