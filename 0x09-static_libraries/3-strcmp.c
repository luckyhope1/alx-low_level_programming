#include "main.h"

/**
 * _strcmp - compares pointers to two strjngs
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: if s1<s2, the negative diff of the first unmatched cha
 * if s1 == s2, 0
 * if s1 > s2, the positive diff of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
		return (*s1 - *s2);
		}
	s1++;
	s2++;
	}
	return (0);
}
