/* pointer02.c */

#include <stdio.h>

int main()
{
	int *pa; /* pa�ɂ̓S�~���͂����Ă��� */
    int a;

	pa = &a; /* �ϐ�a�̃A�h���X��������ꂽ */

	*pa = 5; /* a�̃A�h���X��5�����܂�a��5����*/

	printf("*pa = %d\n", *pa);
	printf("a = %d\n", a);
	
	return 0;
}