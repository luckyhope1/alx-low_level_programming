#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if ((n % 10) > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf(" last digit of %d is %d and is less than 6 and not 6\n", n, n % 10);
}
else
{
printf("last digit of %d is %d is less than 0\n", n, n % 10);
}
return (0);
}
