/* nyujoryo04.c */

#include <stdio.h>

int main()
{
	int age;
	int is_seito; /*���k�Ȃ�1�����łȂ��Ȃ�0*/

	printf("�N�����͂��Ă�������---");
	scanf("%d", &age);
	printf("�u�L�ł��w���v��\n���k����ł���(Yes:1, No:0)---");
	scanf("%d", &is_seito);

	if (age < 6 || is_seito == 1) {
		printf("���ꗿ�͖����ł�\n");
	} else {
		printf("���ꗿ��1000�~�ł�\n");
	}
	return 0;
}