#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0, i != argc[0], i++)
		printf("%d\n", argv[i]);
	return (0);
}
