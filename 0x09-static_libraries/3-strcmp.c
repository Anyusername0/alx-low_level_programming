#include "main.h"

/**
 * _strcmp - compare string values
 *
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int c1;

	c1 = 0;
	while (s1[c1] != '\0' && s2[c1] != '\0')
	{
		if (s1[c1] != s2[c1])
		{
			return (s1[c1] - s2[c1]);
		}
		c1++;
	}
	return (0);
}
