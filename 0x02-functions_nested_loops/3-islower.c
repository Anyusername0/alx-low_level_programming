#include "main.h"

/**
 * _islowe - function to know if a character is lowercase
 *
 * Description: function that checks lowercase character
 *
 * Return: 1 if lowercase , 0 if otherwise (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
