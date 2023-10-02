#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>


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
		c = argv[argc];
		while (c)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		c++
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
