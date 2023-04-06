#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m; /* xor (exclusive OR)*/

	while (xor != 0)
	{
		if (xor & 1)
		{
			count++;
		}
		xor >>= 1;
	}
	return (count);
}
