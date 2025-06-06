/* program51.c */

#include <stdio.h>

int main()
{
	int n, sum = 0;

	for (n = 1; n <= 100; n++)
		sum += n;

	printf("1 + 2 + ...+ 100 = %d\n", sum);

	return 0;
}