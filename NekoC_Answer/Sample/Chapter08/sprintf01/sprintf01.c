/* sprintf01.c */

#include <stdio.h>

int main()
{
	char buffer[128], name[32];
	int age;
	double bl, bw;

	while (1) {
		printf("����---");
		gets(name);
		if (!strcmp(name, "")) {
			printf("�������L������Ă��܂���\n");
			continue;
		}
		break;
	}
	while (1) {
		printf("�N��---");
		scanf("%d", &age);
		if (age < 0 || age > 150) {
			printf("�N��s�K�؂ł�\n");
			continue;
		}
		break;
	}
	while (1) {
		printf("�g��(cm)---");
		scanf("%lf", &bl);
		if (bl < 0.0 || bl > 250.0) {
			printf("�g���̒l���s�K�؂ł�\n");
			continue;
		}
		break;
	}
	while (1) {
		printf("�̏d(kg)---");
		scanf("%lf", &bw);
		if (bw < 0.0 || bw > 200.0) {
			printf("�̏d�̒l���s�K�؂ł�\n");
			continue;
		}
		break;
	}
	sprintf(buffer,
		"\n%s����(�N���%d��)�̃v���t�B�[��\n�g����%5.1fcm�A�̏d%5.1fkg�ŁABMI��%4.1f�ł�\n",
		name, age, bl, bw, bw * 10000.0 / (bl * bl));
	printf(buffer);

	return 0;
}
				