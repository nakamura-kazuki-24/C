/* ave02.c */

#include <stdio.h>

int main()
{
	int sum = 0, p = 0, n = 0;

	while (p != 999) {
		printf("�_��(999�ŏI��)---");
		scanf("%d", &p);
		if (p != 999) {
			sum = sum + p;
			n++;
		}
	}
	printf("%d�l�̍��v�_��%d�_�ł�\n", n, sum);
	printf("���ϓ_��%5.1f�_�ł�\n", (double)sum / n);

	return 0;
}