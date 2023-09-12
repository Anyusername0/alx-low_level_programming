#include "main.h"

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase by _putchar
 * @parameter: alphabet from a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
