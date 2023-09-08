#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in lowercase and uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
        char ch = 'a';
	char ch2 = 'A';
        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }
        while (ch2 <= 'Z')
        {
                putchar(ch2);
                ch2++;
        }
        putchar('\n');
        return (0);
}
