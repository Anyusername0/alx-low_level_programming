#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar function from header
 *
 * return: 1 on success or -1 on error
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
