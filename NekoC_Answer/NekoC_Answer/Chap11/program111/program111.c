/* program111.c */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
	char *lpc, *lpctemp, buf[8];
	int n = 0, i;

	lpc = malloc(sizeof(char));
	if (lpc == NULL) {
		perror("ƒƒ‚ƒŠ[Šm•Û‚É¸”s");
		return -1;
	}
	while (1) {
		printf("‰½‚©•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ -- ");
		gets(buf);
		if (strcmp(buf, "") == 0)
			break;
		lpctemp = realloc(lpc, sizeof(char) * (n + 1));
		if (lpctemp == NULL) {
			perror("—Ìˆæ‚Ì•ÏX¸”s");
			free(lpc);
			return -2;
		}
		lpc = lpctemp;
		lpc[n] = buf[0];
		n++;
	}
	for (i = 0; i < n; i++)
		printf("%c", lpc[i]);
	printf("\n");
	free(lpc);
	return 0;
}
