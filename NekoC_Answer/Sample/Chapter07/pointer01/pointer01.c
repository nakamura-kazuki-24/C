/* pointer01.c */

#include <stdio.h>

int main()
{
	int a;
	int *lpa;

	lpa = &a;

	printf("�K���Ȑ����l����͂��Ă�������----");
	scanf("%d", &a);

	printf("�ϐ�a��%d���������܂����B\n", a);
	printf("�ϐ�a�̃A�h���X��%p�ł��B\n", &a);
	printf("�ϐ�a���w���Ă���|�C���^��lpa�ł�\n");
	printf("*lpa�̒l��%d�ł��B\n", *lpa);

	return 0;
}