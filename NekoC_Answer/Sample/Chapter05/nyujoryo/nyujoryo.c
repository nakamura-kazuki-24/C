/* nyujoryo.c */

#include <stdio.h>

int main()
{
	int age;

	printf("���̂��т́u�L�ł������h�v��\n���������肪�Ƃ��������܂��B\n");
	printf("----------------------------------\n");
	printf("�N�����͂��Ă�������---");
	scanf("%d", &age);

	if (age < 6) {
		printf("���ꗿ�͖����ł�\n");
	}
	if (age >= 6) {
		printf("���ꗿ1000�~�𒸂��܂�\n");
	}
	printf("----------------------------------\n");
	printf("�ł́A��������肨�y���݂�������\n");

	return 0;
}