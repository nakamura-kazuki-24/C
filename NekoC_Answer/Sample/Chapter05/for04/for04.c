/* for04.c */

#include <stdio.h>

int main()
{
	int i = 1;

	for (;;) {	 /*�S���ȗ����Ė������[�v*/
		
		printf("%2d���\n", i);
		
		if (i >= 10)
			break;
		i++;
		
	}

	return 0;
}