#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charater c to sdtout
 * @c: The character to print
 *
 * Return: 1 on Success
 * On error, -1 returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
