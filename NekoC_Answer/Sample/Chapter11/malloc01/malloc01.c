  /* malloc01.c */

#include <stdio.h>
#include <malloc.h>

int main()
{
	int *pi;

	/* int�^1���̃������u���b�N���m�� */
	pi = (int *)malloc(sizeof(int));

	if (pi == NULL) {
		perror("�������̊m�ۂɎ��s���܂����B\n");
		return -1;
	}

	*pi = 100;

	printf("*pi = %d\n", *pi);

	/* �s�v�ɂȂ����������͉������ */
	free(pi);

	return 0;
}
