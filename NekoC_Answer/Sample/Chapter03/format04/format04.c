/* format04.c */

#include <stdio.h>
#include <float.h>

int main()
{
	double pai = 3.14159265358979;
	int mon = 2;
	char *str = "abc";
	float flt = 1.2f;

	printf("%5.2hf\n", flt);
	printf("%-5.2f\n", flt);
	printf("%05.2f\n", flt);
	printf("%+08.2f\n", flt);
	printf("%-08.2f\n", flt);

	printf("%d\n", mon = 3);

	printf("%e\n", pai);

	printf("%08.2f\n", pai);
	printf("%05d\n", mon);
	printf("%09s\n", str);

	printf("�~������%f�ł�\n", pai);
	printf("�~������%lf�ł�\n", pai);
	printf("���������ڂ����l��%10.8lf�ł�\n", pai);
	printf("���������ڂ����l��%15.13lf�ł�\n", pai);
	printf("���������ڂ����l��%20.18f�ł�\n", pai);
	printf("�~������%010.2f\n", pai);
	printf("�~������%-10.2f\n", pai);
	printf("�~������%10.2f\n", pai);
	return 0;
}