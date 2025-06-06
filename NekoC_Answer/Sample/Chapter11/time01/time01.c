/* time01.c */

#include <stdio.h>
#include <time.h>

int main()
{
	time_t orgtime;
	struct tm *lpmytm;
	char *today;

	orgtime = time(NULL);
	lpmytm = localtime(&orgtime);

	printf("���ݎ�����%02d��%02d��%02d�b�ł�\n",
		lpmytm->tm_hour, lpmytm->tm_min, lpmytm->tm_sec);
	printf("������%d�N%02d��%02d���ł�\n",
		lpmytm->tm_year + 1900, lpmytm->tm_mon + 1, lpmytm->tm_mday);
	today = asctime(lpmytm);
	printf(today);

	return 0;
}