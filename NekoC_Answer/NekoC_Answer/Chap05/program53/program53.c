/* program53.c */

#define _CRT_SECURE_NO_DEPRECATE 

#include <stdio.h>

int main()
{
	int max = 0, min = 100, x, n = 0, sum = 0;

	while (1) {
		printf("�_��---- ");
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
		printf("�󌱎Ґ���0�̎��͌v�Z�ł��܂���\n");
		return -1;
	}

	printf("�Œ�_ = %d�_�A�ō��_ = %d�_�A�󌱎Ґ� = %d�l�A���ϓ_ = %5.1f�_\n",
		min, max, n, (double)sum / n);

	return 0;
}