/* do01.c */

#include <stdio.h>

int main()
{
	int n;

	do {
		printf("��������͂��Ă�������(0�ŏI��)---");
		scanf("%d", &n);
		printf("���Ȃ��̓��͂���������%d�ł���\n", n);
	} while (n);

	return 0;
}