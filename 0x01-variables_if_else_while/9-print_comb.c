#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers combination
 *
 * Return: 0 (success)
*/

int main(void)
{
	int com = 0;

	while (com <= 9)
	{
		putchar(com);
		
		if (com != 9)
		{
			putchar(',');
			putchar(' ');
		}

		com++1;
	}
	putchar('\n');

	return (0);
}
