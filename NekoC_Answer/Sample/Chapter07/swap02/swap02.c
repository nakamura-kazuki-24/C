/* swap02.c */

#include <stdio.h>

void swap(int *, int *);

int main()
{
	int a, b;

	a = 10;
	b = 20;

	/* swap�֐��ɕϐ�a, b�̃A�h���X��������*/
	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int *x, int *y)
{
	int z;

	z = *y; 
	*y = *x; 
	*x = z;

	return;
}
	
	