#include "main.h"

/**
 *
 * _isalpha - function that checks for alphabetic character
 *
 * @c: checks a character in the function
 *
 * Return: 1 if c is a letter, lowercase or uppercase , 0 if otherwise (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
