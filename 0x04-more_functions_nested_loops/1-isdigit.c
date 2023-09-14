#include "main.h"

/**
 * _isdigit - chechs if a digit or otherwise
 *
 * @c: input for the function
 *
 * Return: 1 if digit , 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
