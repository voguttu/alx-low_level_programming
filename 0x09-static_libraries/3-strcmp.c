#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: 1st Member
 * @s2: 2nd member
 *
 * Return: value (*s1 - *s2)
 *
 */

int _strcmp(char *s1, char *s2)
{
	char *a;
	char *b;

	a = s1;
	b = s2;

	while (*a && (*a == *b))
	{
		a++;
		b++;
	}
	return (*a - *b);
}
