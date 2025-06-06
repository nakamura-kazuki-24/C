/* program53.c */

#define _CRT_SECURE_NO_DEPRECATE 

#include <stdio.h>

int main()
{
	int max = 0, min = 100, x, n = 0, sum = 0;

	while (1) {
		printf("点数---- ");
		scanf("%d", &x);
		if (x == -1)
			break;
		sum += x;
		if (x >= max)
			max = x;
		if (x <= min)
			min = x;
		n++;
		printf("n = %d, max = %d, min = %d, sum = %d\n",
			n, max, min, sum);
	}
	
	if (n == 0) {
		printf("受験者数が0の時は計算できません\n");
		return -1;
	}

	printf("最低点 = %d点、最高点 = %d点、受験者数 = %d人、平均点 = %5.1f点\n",
		min, max, n, (double)sum / n);

	return 0;
}