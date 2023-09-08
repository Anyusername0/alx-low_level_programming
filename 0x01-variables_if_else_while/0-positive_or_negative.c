#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: if values are neagtive or positive or zero
 *
 * return: always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%z is positive\n", n)
	else if (n == 0)
		printf("%z is zero\n", n)
	else
		printf("%z is negative\n", n)
	return (0);
}
