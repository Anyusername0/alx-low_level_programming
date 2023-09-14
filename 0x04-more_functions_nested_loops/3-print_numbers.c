#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 *
 * Return: 0 (success)
 */

void print_numbers(void)
{

	for (n = 0; n >= 48 && n <= 57; n++)
		_putchar(n + 48);
	_putchar('\n');
}
