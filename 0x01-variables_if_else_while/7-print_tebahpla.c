#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet reversed
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		puchar(ch);
		ch--;
	}
	putchar('\n');

	returtn (0);
}
