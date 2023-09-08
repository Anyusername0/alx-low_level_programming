#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in except e and q
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	if (ch == 'e' || ch == 'q')
	{	
		ch++
		putchar(ch);
		ch++;
	}
	putchar('\n')
	return (0)
}
