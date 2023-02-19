#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int s = 97, e = 122;

while (s <= e)
{
putchar(s);
s++;
}
s = 65;
e = 90;

while (s <= e)
{
putchar(s);
s++;
}
putchar('\n');
return (0);
}
