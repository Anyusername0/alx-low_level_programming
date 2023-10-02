#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - multiplies two numbers
 *
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(int argc, char *argv[])
{
	int mulsum;

	if (argc == 3)
	{
		mulsum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mulsum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
