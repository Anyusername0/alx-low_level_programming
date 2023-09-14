#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 *
 * @c: input for function
 *
 * Description: 1 if uppercase , 0 if else
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
