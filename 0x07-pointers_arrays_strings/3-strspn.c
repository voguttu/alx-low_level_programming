#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string
 * @accept: bytes to be checked
 *
 * Return: count - number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int located;
	char *a;

	while (*s != '\0')
	{
		located = 0;
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				located = 1;
				break;
			}
			a++;
		}
		if (located == 0)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
