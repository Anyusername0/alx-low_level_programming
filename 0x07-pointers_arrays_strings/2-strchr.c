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

	for (cr = 0; s[cr] >= '\0'; cr++)
	{
		if (s[cr] == c)
			return (&s[cr]);

	}
	return (0);
}
