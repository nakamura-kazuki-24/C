/* malloc02.c */

#include <stdio.h>
#include <malloc.h>

int main()
{
	int *pi, no, i;

	printf("���̐����l����͂��܂���--");
	scanf("%d", &no);
	pi = (int *)malloc(sizeof(int) * no);
	if (pi == NULL) {
		perror("�������m�ۂɎ��s���܂���\n");
		return -1;
	}
	for(i = 0; i < no; i++) {
		printf("%d�ڂ̃f�[�^---", i + 1);
		scanf("%d", pi + i);
	}
	printf("���͂��ꂽ�f�[�^�͎��̒ʂ�ł�\n");
	for (i = 0; i < no; i++) 
		printf("No.%d = %d\n", i + 1, *(pi + i));

	free(pi);

	return 0;
}
