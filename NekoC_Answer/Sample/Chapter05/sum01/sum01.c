/* sum01.c */

#include <stdio.h>

int main()
{
	/* sum���v�_, p�_�� */
	int sum = 0, p;

	while (1) {
		printf("�_��(999�ŏI��)----");
		scanf("%d", &p);
		if (p == 999)
			break;
		sum = sum + p;
	}

	printf("���v�_��%d�_�ł�\n", sum);

	return 0;
}

