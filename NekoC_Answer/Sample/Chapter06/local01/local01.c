/* local01.c */

#include <stdio.h>

int function();

int i = 10;

int main()
{
	int i = 5;
	{
		int i = 3;
		printf("main�֐��̒��̃u���b�N��:i = %d\n", i);
	}
	printf("main�֐���:i = %d\n", i);
	function();

	return 0;

}

int function()
{
	printf("function�֐�:i = %d\n", i);

	return 0;
}