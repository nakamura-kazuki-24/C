/* program82.c */

#include <stdio.h>

int main()
{
	char *yobi[] = {
		"“y—j“ú",
		"“ú—j“ú",
		"Œ—j“ú",
		"‰Î—j“ú",
		"…—j“ú",
		"–Ø—j“ú",
		"‹à—j“ú",
	};
	int day;

	while (1) {
		printf("“ú‚É‚¿‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(1-31)[0‚ÅI—¹] : ");
		scanf("%d", &day);
		if (day == 0)
			break;
		printf("%d“ú‚Í%s‚Å‚·\n", day, yobi[day % 7]);
	}

	return 0;
}