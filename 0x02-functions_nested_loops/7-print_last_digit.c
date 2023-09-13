#include "main.c"

/**
 * print_last_digit - function to print last digit
 *
 * @n: input number
 *
 * Return: lastD
*/

int print_last_digit(int)
{
	int lastD;

	if (n < 0)
		lastD = -1 * (n % 10);
	else
		lastD = (n % 10);
	_putchar(lastD + 48);
	return (lastD);
}
