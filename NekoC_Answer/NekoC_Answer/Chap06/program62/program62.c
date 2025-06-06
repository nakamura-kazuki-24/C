/* program62.c */

#include <stdio.h>

int kaijo(int n)
{
	if (n == 0)
		return 1;
	else
		return n * kaijo(n - 1);
}

int main()
{
	int n;

	for (n = 1; n <= 10; n++) 
		printf("%2d! = %d\n", n, kaijo(n));

	return 0;
}
