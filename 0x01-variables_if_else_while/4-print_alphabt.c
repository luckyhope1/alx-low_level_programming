#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int a = 97, b = 122;

	while (a <= b)
	{
		if (a != 'e' && a != 'q')
	{
		putchar(a);
	}
		a++;
	}
	putchar('\n');

	return (0);
}
