#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int cr;

	while (*s)
	{
		for (cr = 0; accept[cr]; cr++)
		{
			if (*s == accept[cr])
				return (s);
		}
		s++;
	}
	return (0);
}
