#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers in base 16
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = '0';
	char ch = 'a';

	while (num <= 9)
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
