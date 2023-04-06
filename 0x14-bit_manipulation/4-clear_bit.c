#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear bit to 0 at a given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		/* index out of range*/
		return (-1);
	}
	p = ~(p << index);
	*n = *n & p;
	return (1);
}

