#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int c1;
	int c2;

	c1 = 0;
	while (c1 != '\0')
	{
		c1++;
	}

	c2 = 0;
	while (c2 != '\0')
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}

	dest[c1] = '\0';
	return (dest);
}
