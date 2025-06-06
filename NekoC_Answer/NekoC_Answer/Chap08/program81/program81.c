/* program81.c */

#define NO 40

#include <stdio.h>

int main()
{
	double tm[NO], sum = 0.0;
	int i;

	printf("タイムを入力してください\n");

	for (i = 0; i < NO; i++) {
		printf("出席番号%2d番のタイム = ", i + 1);
		scanf_s("%lf", &tm[i]);
		sum += tm[i];
	}
	printf("------------------\n");
	printf("平均値は%lf秒です\n", sum / NO);
	printf("------------------\n");
	while (1) {
		printf("出席番号(0で終了) : ");
		scanf_s("%d", &i);
		if (i == 0)
			break;
		printf("%d番のタイム : %f\n", i, tm[i - 1]);
	}

	return 0;
}