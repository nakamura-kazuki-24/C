/* funcptr01.c */

#include <stdio.h>

int func(int);

int main()
{
	printf("main�֐��̃A�h���X = %p\n", main);
	printf("func�֐��̃A�h���X = %p\n", func);

	return 0;
}

int func(int x)
{
	printf("x = %d\n", x);

	return 0;
}