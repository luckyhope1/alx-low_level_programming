#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: the first int to be swapped
 * @b: the second int to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
