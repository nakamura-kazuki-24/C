/* swap01.c */

#include <stdio.h>

void swap(int, int);

int main()
{
	int a, b;

	a = 10;
	b = 20;

	/* swap�֐���a��b�̒l�����ւ��Ă��炤���Ƃ�����*/
	swap(a, b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int a, int b)
{
	int c;

	c = b; /* b�̒l��c�ɑ�� */
	b = a; /* a�̒l��b�ɑ�� */
	a = c; /* c�ɓ���Ă���������b�̒l��a�ɑ�� */
	/* ����ŁAa��b�̒l������ւ�����͂������E�E�E*/
	return;
}
	
	