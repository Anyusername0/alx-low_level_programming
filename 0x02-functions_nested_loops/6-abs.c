#include "main.h"

/**
 * _abs: function that calculates absolute value for integer n
 *
 * @n: takes an integer in the function
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
