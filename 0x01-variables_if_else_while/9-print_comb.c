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
		putchar(com + 48);	
		if (com != 9)
		{
			putchar(',');
			putchar(' ');
		}

		com++;
	}
	putchar('\n');

	return (0);
}
