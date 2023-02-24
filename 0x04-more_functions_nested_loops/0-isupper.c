#include "main.h"

/**
 * _isupper - uppercase letter
 *
 *@c: the character to print
 * Return: 0 or 1
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
