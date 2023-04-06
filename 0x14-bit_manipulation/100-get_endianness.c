#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks if multibyte data is the endianness.
 * Return: If big-endian - 0, if little-endian -1.
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *p = (char *)&q;

	return (*p == 1);
}
