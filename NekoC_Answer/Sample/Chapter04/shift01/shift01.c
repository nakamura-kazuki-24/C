/* shift01.c */

#include <stdio.h>

int main()
{
	short a = 12, b = 100, c = -50;

	printf("%d������1�r�b�g�V�t�g --- %d\n", a, a << 1);
	printf("�����1�r�b�g���V�t�g --- %d\n", a << 2);
	printf("�����1�r�b�g���V�t�g --- %d\n", a << 3);
	printf("�����1�r�b�g���V�t�g --- %d\n", a << 4);
	printf("\n");
	printf("%d���E��1�r�b�g�V�t�g --- %d\n", b, b >> 1);
	printf("�����1�r�b�g�E�V�t�g ---- %d\n", b >> 2);
	printf("�����1�r�b�g�E�V�t�g ---- %d\n", b >> 3);
	printf("�����1�r�b�g�E�V�t�g ---- %d\n", b >> 4);
	printf("(�����n�ˑ�)\n");
	printf("%d������1�r�b�g�V�t�g --- %d\n", c, c << 1);
	printf("%d���E��1�r�b�g�V�t�g --- %d\n", c, c >> 1);

	return 0;
}