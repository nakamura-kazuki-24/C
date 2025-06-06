/* program52.c */

#include <stdio.h>

int main()
{
	int n = 1, sum = 0;

	while (n <= 100)
		sum += n++;

	printf("1 + 2 +...+ 100 = %d\n", sum);

	return 0;
}