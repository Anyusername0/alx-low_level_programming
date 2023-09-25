#include "main.h"

/**
 * _strchr - Entry point
 *
 * @s: input
 * @c: input
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int cr;

	for (cr = 0; str[cr] >= '\0'; cr++)
	{
		if (str[cr] == c)
			return (&str[cr]);

	}
	return (0);
}
