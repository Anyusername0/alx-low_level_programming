#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
		while (ch <= 'z')
		putchar(ch);
		ch = ch + 1;
	putchar('\n');

	return (0);
}
