/* calloc01.c */

#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
	char *pc;

	pc = (char *)calloc(16, sizeof(char));
	if (pc == NULL) {
		perror("ƒƒ‚ƒŠ‚ÌŠm•Û‚É¸”s‚µ‚Ü‚µ‚½\n");
		return -1;
	}

	strcpy(pc, "‚ ‚¢‚¤‚¦‚¨");
	printf("%s\n", pc);

	free(pc);

	return 0;
}