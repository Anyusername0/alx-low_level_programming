#include "main.h"

/**
 * main - Entry point
 *
 * Description: print letters in lowercase
 *
 * Retur: 0 (success)
*/

void print_alphabet(void);
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++);
		_putchar(ch);
	_putchar('\n');

	return (0);
}
