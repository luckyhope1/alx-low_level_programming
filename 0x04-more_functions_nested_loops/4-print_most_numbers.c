#include "main.h"

/**
 * print_most_numbers - print num expect 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			putchar(c);
	}
	putchar('\n');
}
