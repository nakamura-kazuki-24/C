/* switch01.c */

#include <stdio.h>

int main()
{
	int n;

	printf("1����5�܂ł̐�������͂��Ă��������B----");
	scanf("%d", &n);

	switch (n) {
		case 1:
			printf("���Ȃ��͈�ԏ�������������͂��܂�����\n");
			break;
		case 2:
			printf("�����͂悢���Ƃ�����ł��傤\n");
			break;
		case 3:
			printf("���f�̓��ł�\n");
			break;
		case 4:
			printf("�S�͍K���̂S\n");
			break;
		case 5:
			printf("���Ȃ���5��I�т܂���\n");
			break;
		default:
			printf("1����5�܂ł̐�������͂��Ă�������\n");
			break;
	}

	printf("����ł����܂��ł�\n");

	return 0;
}
