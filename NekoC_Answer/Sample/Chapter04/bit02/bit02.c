/* bit03.c */

#define CAT 1
#define DOG 2
#define RAT 4
#define RABBIT 8

#include <stdio.h>

int main()
{
	int a = CAT | DOG;
	int b = RAT;
	int c = CAT | DOG | RAT | RABBIT;
	int d = DOG | RAT;

	printf("�`����̃y�b�g(�L = %d, �� = %d, �l�Y�~ = %d, �E�T�M = %d)\n",
		(a & CAT) != 0, (a & DOG) != 0, (a & RAT) != 0, (a & RABBIT) != 0);
	printf("�a����̃y�b�g(�L = %d, �� = %d, �l�Y�~ = %d, �E�T�M = %d)\n",
		(b & CAT) != 0, (b & DOG) != 0, (b & RAT) != 0, (b & RABBIT) != 0);
	printf("�b����̃y�b�g(�L = %d, �� = %d, �l�Y�~ = %d, �E�T�M = %d)\n",
		(c & CAT) != 0, (c & DOG) != 0, (c & RAT) != 0, (c & RABBIT) != 0);
	printf("�c����̃y�b�g(�L = %d, �� = %d, �l�Y�~ = %d, �E�T�M = %d)\n",
		(d & CAT) != 0, (d & DOG) != 0, (d & RAT) != 0, (d & RABBIT) != 0);

	return 0;
}
