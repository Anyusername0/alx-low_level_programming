#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argc: no. of argues.
 * @argv: value
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				return (printf("Error\n"), 1);
			}
		sum += atoi(agrv[agrc]);
	}
	printf("%d\n", sum);
	return (0);
}
