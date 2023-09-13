#include "main.h"

/**
 * _abs: function that calculates absolyte value
 *
 * @n: takes an integer
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
