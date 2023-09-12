#include "main.h"

/**
 * void print_alphabet_x10 - print alphabet 10 times
 *
 * Description: print alphabet 10x
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
