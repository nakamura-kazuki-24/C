/* program63.c */

#include <stdio.h>

int fibonacci(int);

int main()
{
	int n;

	for (n = 1; n <= 30; n++)
		printf("f(%2d) = %d\n", n, fibonacci(n));

	return 0;
}

int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}