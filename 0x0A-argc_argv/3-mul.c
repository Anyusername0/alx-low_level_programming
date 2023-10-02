#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: pointer to an array
 *
 * Return: the int converted from the string
 */

int main(int argc, char *argv[])
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
