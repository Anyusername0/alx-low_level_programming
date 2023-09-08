#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers fron 0 to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");

	return (0);
}
