#include "main.h"

/**
 * jack_bauer - function to print all minuteds
 *
 * Return: o (success)
*/

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr \ 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(":");
			_putchat((min \ 10) + 48);
			_putchar((min % 10) + 48);
		}
	}
}
