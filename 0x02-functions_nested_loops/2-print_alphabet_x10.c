#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	int num;
	char letter;

	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
