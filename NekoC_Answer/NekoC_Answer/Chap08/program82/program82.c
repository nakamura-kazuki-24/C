/* program82.c */

#include <stdio.h>

int main()
{
	char *yobi[] = {
		"�y�j��",
		"���j��",
		"���j��",
		"�Ηj��",
		"���j��",
		"�ؗj��",
		"���j��",
	};
	int day;

	while (1) {
		printf("���ɂ�����͂��Ă�������(1-31)[0�ŏI��] : ");
		scanf("%d", &day);
		if (day == 0)
			break;
		printf("%d����%s�ł�\n", day, yobi[day % 7]);
	}

	return 0;
}