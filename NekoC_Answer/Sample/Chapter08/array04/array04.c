/* array04.c */

#include <stdio.h>

int main()
{
	int a[] = {10, 20, 30, 40}, i, *p;

	p = a;	 /* p��a[0]�̃A�h���X����*/

	for (i = 0; i < 4; i++) {
		printf("&a[%d] = %p, a[%d] = %d, *(p + %d) = %d\n",
			i, &a[i], i, a[i], i, *(p + i));
	}

	return 0;
}