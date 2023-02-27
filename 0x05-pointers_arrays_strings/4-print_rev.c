#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int c = 0;

	while (*s[c] != '\0')
	{
		c++;
	}
for (c -= 1; c >= 0; o--)
{
_putchar(s[c]);
}
_putchar('\n');
}
