#include <stdio.h>

/**
 * main - adds positive numbers
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
                                printf("Error\n");
                                return (1);
                                }
                sum += agrv[agrc];
        }
        printf("%d\n", sum);
        return (0);
}
