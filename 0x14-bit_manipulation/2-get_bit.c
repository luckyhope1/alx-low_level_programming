#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_of_bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	val_of_bit = (n >> index) & 1;
	return (val_of_bit);
}
