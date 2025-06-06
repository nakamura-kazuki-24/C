/* funcptr04.c */

#define PAI 3.141592653589793

#include <stdio.h>
#include <stdlib.h>

double sankaku();
double daikei();
double en();

int main()
{
	double (*fn[3])() = {sankaku, daikei, en};
	char ret[8];
	int fnno;

	while (1) {
		printf("�ǂ̖ʐς����߂܂���\n(1:�O�p�` 2:��` 3:�~ 0:�I��)--");
		gets(ret);
		if (ret[0] < '0' || ret[0] > '3') {
			printf("�ԍ����s���ł�\n");
			continue;
		}
		ret[1] = '\0';
		fnno = atoi(ret);
		if (fnno == 0)
			break;
		printf("�ʐς�%f�ł�\n", (*fn[fnno - 1])());
	}
	return 0;
}

double sankaku()
{
	char str[32];
	double teihen, takasa;

	printf("�O�p�`�̖ʐς����߂܂�\n");
	printf("��� = ");
	gets(str);
	teihen = atof(str);
	printf("���� = ");
	gets(str);
	takasa = atof(str);

	return teihen * takasa / 2.0;
}

double daikei()
{
	char str[32];
	double jotei, katei, takasa;

	printf("��`�̖ʐς����߂܂�\n");
	printf("��� = ");
	gets(str);
	jotei = atof(str);
	printf("���� = ");
	gets(str);
	katei = atof(str);
	printf("���� = ");
	gets(str);
	takasa = atof(str);

	return (jotei + katei) * takasa / 2.0;
}

double en()
{
	char str[32];
	double hankei;

	printf("�~�̖ʐς����߂܂�\n");
	printf("���a = ");
	gets(str);
	hankei = atof(str);

	return (hankei * hankei) * PAI;
}


