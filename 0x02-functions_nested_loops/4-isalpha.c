#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: charater to be checked
 *
 * Return: 1 if if character a is latter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
