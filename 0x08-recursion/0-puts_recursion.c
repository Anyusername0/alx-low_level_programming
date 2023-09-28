#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints string like puts()
 *
 * @s: input
 *
 * Return: 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
